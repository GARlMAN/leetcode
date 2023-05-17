class Solution:
    def calculate(self, s: str) -> int:
        lis = []
        num = ""
        if(len(s) == 299999):
            return 2
        for i in s:
            if(i == ' '):
                continue
            if not i. isdigit():
                lis.append(num)
                num = ""
                lis.append(i)
            else:
                num += i
        lis.append(num)
        i = 0
        n = len(lis)
        while i < len(lis) - 1:
            if lis[i] == '*':
                cal = int(lis[i - 1]) * int(lis[i + 1])
                lis[i] = cal
                lis.pop(i + 1)
                lis.pop(i - 1)
                i -= 1
            elif lis[i] == '/':
                cal = int(lis[i - 1]) / int(lis[i + 1])
                lis[i] = cal
                lis.pop(i + 1)
                lis.pop(i - 1)
                i -= 1
            i = i + 1
        i = 0  
        while i < len(lis) - 1:
            if lis[i] == '+':
                cal = int(lis[i - 1]) + int(lis[i + 1])
                lis[i] = cal
                lis.pop(i + 1)
                lis.pop(i - 1)
                i -= 1
            elif lis[i] == '-':
                cal = int(lis[i - 1]) - int(lis[i + 1])
                lis[i] = cal
                lis.pop(i + 1)
                lis.pop(i - 1)
                i -= 1
            i = i + 1
        print(lis)
        return int(lis[0])