class Solution:
    def solveSudoku(self, board: List[List[str]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        row = [set() for _ in range(9)]
        col = [set() for _ in range(9)]
        boxes = [set() for _ in range(9)]
        
        for i in range(9):
            for j in range(9):
                if(board[i][j] != '.'):
                    num = int(board[i][j])
                    row[i].add(num)
                    col[j].add(num)
                    boxes_num = i // 3 * 3 + j // 3
                    boxes[boxes_num].add(num)
        def solve(i, j):
            nonlocal solved
            next_i = i + (j + 1) // 9
            next_j = (j + 1) % 9
            if i == 9:
                solved = True
                return
            

            boxes_num = i // 3 * 3 + j // 3   

            if board[i][j] != '.':
                solve(next_i, next_j)
            else:
                for num in range(1, 10):
                    if (num not in row[i] and num not in col[j] and num not in boxes[boxes_num]):
                        board[i][j] = str(num)
                        row[i].add(num)
                        col[j].add(num)
                        boxes[boxes_num].add(num)

                        solve(next_i, next_j)
                        if not solved:
                            board[i][j] = "."
                            row[i].remove(num)
                            col[j].remove(num)
                            boxes[boxes_num].remove(num)
        solved = False                
        solve(0, 0)
                    
                    
                