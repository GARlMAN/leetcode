class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        int n = nums.size() - 1;
        if(n == 0)
            return nums[0];
        dp[n] = nums[n];
        dp[n - 1] = nums[n - 1];
        for(int i = n - 2; i >= 0; --i){
            for(int j = i + 2; j <= n; ++j)
                dp[i] = max(dp[j] + nums[i], dp[i]);
        }
        return max(dp[0], dp[1]);
    }
};