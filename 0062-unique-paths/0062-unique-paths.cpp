class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, 1));
        
        //checking values for all values
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                if(j != 0 && i != 0)
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        return dp[m - 1][n - 1];
    }
};