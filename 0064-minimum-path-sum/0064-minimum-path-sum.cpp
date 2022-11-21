class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> dp(row, vector<int>(col, 1));
        
        for(int i = row - 1; i >= 0; --i){
            for(int j = col - 1; j >= 0; --j){
                cout << grid[i][j] << " ";
                if(i ==  row - 1 && j == col - 1)
                    dp[i][j] = grid[i][j];
                else if(i == row - 1)
                    dp[i][j] = dp[i][j + 1] + grid[i][j];
                else if(j == col - 1){
                    dp[i][j] = grid[i][j] + dp[i + 1][j];
                }
                    
                else
                    dp[i][j] = min(grid[i][j] + dp[i][j + 1], dp[i + 1][j] + grid[i][j]);
            } 
            cout << endl;
        }
        
        return dp[0][0];
    }
};