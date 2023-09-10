class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> a;
        sort(candidates.begin(), candidates.end());
        solve(candidates, target, 0, a);
        return ans;
    }
    void solve(vector<int>& candidates, int target, int k, vector<int> a){
        if(target == 0 && find(begin(ans), end(ans), a) == end(ans))
            ans.push_back(a);
        if(target <= 0)
            return;
        for(int i = k;i < candidates.size(); ++i){
            if(i == k || candidates[i] != candidates[i - 1]){
                a.push_back(candidates[i]);
                solve(candidates, target - candidates[i],i + 1, a);
                a.pop_back();
            }

        }
    }
};