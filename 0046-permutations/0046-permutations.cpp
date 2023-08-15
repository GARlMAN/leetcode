class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> a;
        solve(nums, a, 0);
        return ans;
    }
    
    void solve(vector<int> &nums, vector<int> a, int k){
        if(k == nums.size()){
            ans.push_back(a);
            return;
        }
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] != 11){
                int temp = nums[i];
                a.push_back(nums[i]);
                nums[i] = 11;
                solve(nums, a, k + 1);
                nums[i] = temp;
                a.pop_back();
            }
        }
    }
    
    
};