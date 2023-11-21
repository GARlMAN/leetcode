class Solution {
public:
    bool validTicTacToe(vector<string>& board) {
        int num_x  = 0, num_o = 0;
        bool o_won = false, x_won = false;
        //this for diagonals
        if(board[0][0] == board[1][1] && board[0][0] == board[2][2])
            if(board[0][0] == 'X')
                x_won = true;
            else if(board[0][0] == 'O')
                o_won = true;
         if(board[0][2] == board[1][1] && board[1][1] == board[2][0])
            if(board[1][1] == 'X')
                x_won = true;
            else if(board[1][1] == 'O')
                o_won = true;
        
        //checking for num of os and xs and lines
        for(int i = 0; i < 3; ++i){
            for(int j = 0; j < 3; ++j){
                if((board[i][j] == board[(i + 1) % 3][j] && board[i][j] == board[(i + 2) % 3][j]) || (board[i][j] == board[i][(j + 1) % 3] && board[i][j] == board[i][(j + 2) % 3]))
                if(board[i][j] == 'X')
                    x_won = true;
                else if(board[i][j] == 'O')
                    o_won = true;
                    
                    
                    
                    
                if(board[i][j] == 'X')
                    num_x++;
                else if(board[i][j] == 'O')
                    num_o++;
            }
        }
        
        if(num_o == num_x || num_o + 1 == num_x){
            if(x_won && num_o == num_x)
                return false;
            else if(o_won && num_o != num_x)
                return false;
            else
                return true;
        }
        return false;
    }
};