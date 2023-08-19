class Solution {
public:
    int main_count = 0;
    //code for rotting the oranges
    void rotem(vector<vector<int>>& grid, pair<int, int> p, queue<pair<int, int>> &qu){
        int i = p.first;
        int j = p.second;
        if(i > 0 && grid[i - 1][j] == 1){
            grid[i - 1][j] = 2;
            main_count++;
            qu.push({i - 1, j});
        }
        if(j > 0 && grid[i][j - 1] == 1){
            grid[i][j - 1] = 2;
            main_count++;
            qu.push({i, j - 1});
        }
        if(i < grid.size() - 1 && grid[i + 1][j] == 1){
            grid[i + 1][j] = 2;
            main_count++;
            qu.push({i + 1, j});
        }
        if(j < grid[0].size() - 1 && grid[i][j + 1] == 1){
            grid[i][j + 1] = 2;
            main_count++;
            qu.push({i, j + 1});
        }

    }
    int orangesRotting(vector<vector<int>>& grid) {
        int count = 0;
        int ans = 0;
        queue <pair<int, int>> qu;
        //finding all the first rotted oranges
        for(int row = 0; row < grid.size(); ++row){
            for(int col = 0; col < grid[0].size(); ++col){
                if(grid[row][col] == 1)
                    count++;
                else if(grid[row][col] == 2)
                    qu.push({row, col});
            }
        }
        //bfs depeding on the oranges
        while(!qu.empty()){
            if(count != main_count)
                ans++;
            int n = qu.size();
            for(int i = 0; i < n; ++i){
                rotem(grid, qu.front(), qu);
                qu.pop();
            }

        }
        return count == main_count ? ans : -1;
    }
};