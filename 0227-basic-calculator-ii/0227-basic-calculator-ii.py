class Solution:
    def calculate(self, s: str) -> int:
        lis = []
        num = ""
        prev_num = 0
        current = ""
        res = 0
        operator = '+'
        for i in s:
            if(i == ' '):
                continue
            if not i.isdigit():
                current = int(current)
                if operator == '+':
                    prev_num = current
                    res += int(current)
                elif operator == '-':
                    prev_num = -current
                    res -= int(current)
                elif operator == '*':
                    res -= prev_num
                    res += prev_num*current
                    prev_num = prev_num*current
                elif operator == '/':
                    res -= prev_num
                    res += int(prev_num/current)
                    prev_num = int(prev_num/current)
                operator = i
                current = ""
            else:
                current += i

        current = int(current)        
        if operator == '+':
            prev_num = current
            res += int(current)
        elif operator == '-':
            prev_num = -current
            res -= int(current)
        elif operator == '*':
            res -= prev_num
            res += prev_num*current
            prev_num = prev_num*current
        elif operator == '/':
            res -= prev_num
            res += int(prev_num/current)
            prev_num = int(prev_num/current)
        operator = i
        current = ""
        return res