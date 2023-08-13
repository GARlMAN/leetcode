class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> a;
        solve(candidates, a, target, 0, 0);
        return ans;
    }
    
    void solve(vector<int>& candidates, vector<int> a, int target, int sum, int k){
        if(sum > target)
            return;
        else if(sum ==  target){
            ans.push_back(a);
            return;
        }
        for(int i = k; i < candidates.size(); ++i){
            a.push_back(candidates[i]);
            solve(candidates, a, target, sum + candidates[i], i);
            a.pop_back();
        }     
    }
};