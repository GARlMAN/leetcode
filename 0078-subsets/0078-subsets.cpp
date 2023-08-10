class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> a;
        ans.push_back(a);
        solve(nums, a, 0);
        return ans;
    }
    void solve(vector<int>& nums, vector<int> a, int k) {

        for(int i = k; i < nums.size(); ++i){
            a.push_back(nums[i]);
            ans.push_back(a);
            solve(nums, a, i + 1);
            a.pop_back();
        }
    }
};