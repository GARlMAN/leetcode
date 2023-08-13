class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> sorted_stones;
        sorted_stones.push(0);
        for(auto stone : stones)
            sorted_stones.push(stone);
        
        while(sorted_stones.size() > 2){
            int st1 = sorted_stones.top();
            sorted_stones.pop();
            int st2 = sorted_stones.top();
            sorted_stones.pop();
            int s = abs(st1 - st2);
            if(s != 0)
                sorted_stones.push(s);
        }
        return sorted_stones.top();
        
    }
};