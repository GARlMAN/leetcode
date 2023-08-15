class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> a;
        sort(nums.begin(), nums.end());
        solve(nums, a, 0);
        return ans;
    }
    void solve(vector<int>& nums, vector<int> a, int k){
        if(k == nums.size()){
            if (std::find(ans.begin(), ans.end(),a)==ans.end())
                ans.push_back(a);
            return;
        }
        solve(nums, a, k + 1);
        a.push_back(nums[k]);
        solve(nums, a, k + 1);
    }
};