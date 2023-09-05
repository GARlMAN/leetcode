class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        vector<int> comp = {0,0,0};
        for(auto vec : triplets){
            if(target[0] >= vec[0] && target[1] >= vec[1] && target[2] >= vec[2]){
                if(!comp.size())
                    comp = vec;
                else
                    comp = {max(vec[0], comp[0]), max(vec[1], comp[1]), max(vec[2], comp[2])};
                
                    
            }
        }
        return comp == target;
    }
};