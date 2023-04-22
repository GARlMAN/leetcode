class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> a;
        solve(a, 1, n, k);
        return ans;
    }
    void solve(vector<int> a, int start, int target, int k){
        if(target == 0 && k == 0){
            ans.push_back(a);
            return;
        }

        
        if(target < 0 || k < 0)
            return;
        int ans = 0;
        int end = target > 9 ? 9 : target;
        for(int i = start; i <= end; ++i){
            a.push_back(i);
            solve(a, i + 1, target - i, k - 1);
            a.pop_back();
            
        }
        return;
    }
};