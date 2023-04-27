class Solution {
public:
    void solve(vector<vector<char>>& grid, int i, int j){
        if(i >= grid.size() || j >= grid[i].size() || i < 0  || j < 0 || grid[i][j] == '0' || grid[i][j] == 'x' )
            return;
        grid[i][j] = 'x';
        solve(grid, i + 1, j);
        solve(grid, i - 1, j);
        solve(grid, i, j + 1);
        solve(grid, i, j - 1);
        return;
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        for(int i = 0; i < grid.size(); ++i){
            for(int j = 0; j < grid[i].size(); ++j){
                if(grid[i][j] == '1'){
                    ans += 1;
                    solve(grid, i, j);
                }
                    
            }
        }
        return ans;
    }
};