class Solution {
public:
    void solve(vector<vector<char>>& board, int m, int n){
        if(m == board.size() || n == board[m].size())
            return;
        cout << m << " " << n << endl;
        if(board[m][n] == 'O')
            board[m][n] = '1';
        if(m != 0 && board[m - 1][n] == 'O'){
            solve(board, m - 1, n);
        }
        if(m != board.size() - 1 && board[m + 1][n] == 'O')
            solve(board, m + 1, n);

        if(n != board[m].size() - 1 && board[m][n + 1] == 'O')
            solve(board, m, n + 1);
            
        if(n != 0 && board[m][n - 1] == 'O')
            solve(board, m, n - 1);
  
        
        
        
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