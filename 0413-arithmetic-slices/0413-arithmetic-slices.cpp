class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        vector <int> dp(nums.size() + 1, 0);
        if(nums.size() < 3)
            return 0;
        for(int i = 0; i < nums.size() - 2; ++i){
            if(nums[i + 2] - nums[i + 1] == nums[i + 1] - nums[i]){
                dp[i] = i == 0 ? 1 : dp[i - 1] + 1;
            }
        }
        int ans = 0;
        for(int i = 0; i < dp.size(); ++i)
            ans += dp[i];
        return ans;
        
    }
};