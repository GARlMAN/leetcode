class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        priority_queue <int, vector<int>, greater<int> > pq;
        map<int, int> hash;
        for(int i = 0; i < hand.size(); ++i){
            if(hash[hand[i]] == 0)
                pq.push(hand[i]);
            hash[hand[i]] += 1;
        }
        
        while(!pq.empty()){
            int top = pq.top();
            
            for(int i = top; i < top + groupSize; ++i){
                
                if(hash[i] > 0){
                    
                    hash[i] -= 1;
                    if(hash[i] == 0)
                        if(i != pq.top())
                            return false;
                        else
                            pq.pop();
                    
                }
                else
                    return false;
    
                    
            }
        }
        return true;
    }
};