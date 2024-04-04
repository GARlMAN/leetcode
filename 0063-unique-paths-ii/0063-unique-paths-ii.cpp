class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size() + 1, n = obstacleGrid[0].size() + 1;
        vector<vector<int>> dp(m, vector<int>(n, 0));

        if(obstacleGrid[0][0] == 1)
            return 0;

        for(int i = 1; i < m; ++i)
            for(int j = 1; j < n; ++j){
                if(obstacleGrid[i - 1][j - 1] != 1)
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                dp[1][1] = 1;
            }

        
        return dp[m - 1][n - 1];
    }
};