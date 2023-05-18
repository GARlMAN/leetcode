class Solution:
    def addStrings(self, num1: str, num2: str) -> str:
        n = len(num2) if len(num1) > len(num2)  else len(num1)
        i = 0
        carry = 0
        num1 = list(num1[::-1])
        num2 = list(num2[::-1])
        ans =  num1 if len(num1) > len(num2)  else num2
        while((carry or i < n) and i < len(ans)):
            if(i < n):
                cal = int(num1[i]) + int(num2[i]) +carry
            elif(i < len(ans)):
                cal = int(num1[i]) + carry if len(num1) > len(num2) else int(num2[i]) + carry 
            carry = 1 if cal > 9 else 0
            cal = cal % 10
            ans[i] = str(cal)
            i += 1
        ans = "".join(ans)[::-1]
        if(carry == 1):
            ans = '1' + ans
        return ans
        