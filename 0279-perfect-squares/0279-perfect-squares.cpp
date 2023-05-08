class Solution {
public:
    int numSquares(int n) {
        vector <int> dp(n + 1, n + 1);
        dp[0] = 0;
        for(int target = 1; target <= n; target++){
            for(int j = 1; j <= target; j++){
                if(j * j > target)
                    break;
                dp[target] = min(dp[target], 1 + dp[target - (j * j)]);
            }
        }
        
        return dp[n];
    }


};