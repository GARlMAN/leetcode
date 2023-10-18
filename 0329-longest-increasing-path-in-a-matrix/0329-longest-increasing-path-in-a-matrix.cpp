class Solution {
public:
    int ans = 0;
    map<pair<int, int>, int> dp;
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        for(int i = 0; i < matrix.size(); ++i)
            for(int j = 0; j < matrix[i].size(); ++j)
                solve(matrix, i, j, -1);
        return ans;
    }
    
    int solve(vector<vector<int>>& grid, int i, int j, int prev){
        if(i == grid.size() || j == grid[0].size() || j == -1 || i == -1 || grid[i][j] == -1)
            return 0;
        int temp = grid[i][j];
        
        if(temp <= prev)
            return 0;
        if(dp[{i, j}])
            return dp[{i, j}];
        
        grid[i][j] = -1;
        int up = 1 + solve(grid, i + 1, j, temp);
        int down = 1 + solve(grid, i - 1, j, temp);
        int left = 1 + solve(grid, i , j +1, temp);
        int right = 1 + solve(grid, i, j - 1, temp);
        int count = max(max(up, down), max(left, right));
        
        grid[i][j] = temp;
        ans = max(count, ans);
        return dp[{i, j}] = count;
    }
    
};