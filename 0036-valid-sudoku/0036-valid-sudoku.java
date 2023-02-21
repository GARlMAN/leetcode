class Solution {
    public boolean isValidSudoku(char[][] board) {
        HashSet<String> set=new HashSet();  
        for(int i = 0; i < board.length; ++i){
            for(int j = 0; j < board[i].length; ++j){
                if(board[i][j] == '.')
                    continue;
  
                if(!set.add(board[i][j] + "column" + i) 
                   || !set.add(board[i][j] + "row" + j)  || !set.add(board[i][j] + "subbox" + i/3 + "-" + j/3))
                    return false;
            }

        }
        return true;
    }
}