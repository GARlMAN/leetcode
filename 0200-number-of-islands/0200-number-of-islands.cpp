class Solution {
public:
    void solve(vector<vector<char>>& grid, int i, int j){
        if(i == grid.size() || j == grid[0].size() || j == -1 || i == -1 || grid[i][j] != '1')
            return;
        grid[i][j] = 'X';
        solve(grid, i + 1, j);
        solve(grid, i - 1, j);
        solve(grid, i , j +1);
        solve(grid, i, j - 1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        for(int i = 0; i < grid.size(); ++i)
            for(int j = 0; j < grid[0].size(); ++j)
                if(grid[i][j] == '1')
                    ans += 1, solve(grid, i, j);
        return ans;
    }
};