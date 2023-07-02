class Solution:
    def solveEquation(self, equation: str) -> str:
        equation += 'e'
        x_val = 0
        val = 0
        right = 1
        num = ''
        prev = '+'
        for v in equation:
            if v.isdigit():
                num += v
            else:
                if(v == 'x'):
                    #handle for num = ''
                    num = '1' if num == '' else num
                    x_val += right * int(num) if prev == '+' else -right * int(num)
                elif(v == '='):
                    num = '0' if num == '' else num
                    val += right * int(num) if prev == '+' else -right * int(num)
                    right = -1
                    prev = '+'
                else:
                    num = '0' if num == '' else num
                    val += right * int(num) if prev == '+' else -right * int(num)
                    prev = v
                num = ''
                
        if(x_val == val and val == 0):
            return "Infinite solutions"
        elif(x_val == 0):
            return "No solution"
        print(val, x_val)
        val = -val //  x_val    
        return f'x={val}'