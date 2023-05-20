class Solution {
public:
    double dp[105][105];
    double largestSumOfAverages(vector<int>& nums, int k) {
        return solve(nums, k, 0);
    }
    double solve(vector<int>& nums, int k, int start){
        if(start >= nums.size())
            return 0;
        if(k == 0)
            return INT_MIN;
        if(dp[start][k])
            return dp[start][k];
        double sum = 0;
        double ans = 0;
        for(int i = start; i < nums.size(); ++i){
            sum += nums[i];
            ans = max(ans, sum/(i - start + 1) + solve(nums, k - 1, i + 1));
        }
        
        return dp[start][k] = ans;
        
    }
};