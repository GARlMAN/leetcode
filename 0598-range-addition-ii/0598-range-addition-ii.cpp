class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.size() == 0)
            return m*n;
        
        int a1_min = INT_MAX;
        int b1_min = INT_MAX;
        for(auto op : ops){
            a1_min = min(a1_min, op[0]);
            b1_min = min(b1_min, op[1]);           
        }
        return b1_min * a1_min;
    }
};