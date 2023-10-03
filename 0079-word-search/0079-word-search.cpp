class Solution {
public:
    bool ans = false;
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i < board.size(); ++i)
            for(int j = 0; j < board[0].size(); ++j){
               if(solve(i, j, word, board, 0))
                   return true;
            }

        
        return false;
    }
    
    bool solve(int i, int j, string word, vector<vector<char>>& board, int k){
        if(k == word.size())
            return true;
        if(i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != word[k])
            return false;
        char ch =  board[i][j];
        board[i][j] = '#';
        k++;
        bool horzontal = solve(i + 1, j, word, board, k) || solve(i - 1, j, word, board, k);
        bool vertical = solve(i, j + 1, word, board, k) || solve(i, j - 1, word, board, k);
        board[i][j] = ch;
        return horzontal || vertical;
    }
};