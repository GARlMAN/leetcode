class Solution {
public:
    void solve(vector<vector<char>>& grid, int i, int j){
        if(i == grid.size() || j == grid[0].size() || j == -1 || i == -1 || grid[i][j] == '1' || grid[i][j] == 'X')
            return;
        grid[i][j] = '1';
        
        solve(grid, i + 1, j);
        solve(grid, i - 1, j);
        solve(grid, i , j +1);
        solve(grid, i, j - 1);
    }
    
    void solve(vector<vector<char>>& board) {
       
        for(int m = 0; m < board.size(); ++m){
            for(int n = 0; n < board[m].size(); ++n){
                if(m == 0 || n == 0 || m == board.size() - 1 ||n == board[m].size() - 1){
                    if(board[m][n] == 'O')
                        solve(board, m, n);
                }
                
            }
        }
        for(int m = 0; m < board.size(); ++m){
            for(int n = 0; n < board[m].size(); ++n){

                if(board[m][n] == '1')
                    board[m][n] = 'O';
                else
                    board[m][n] = 'X';

                
            }
        }

    }
};