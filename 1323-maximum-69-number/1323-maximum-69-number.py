class Solution:
    def maximum69Number (self, num: int) -> int:
        ans = ""
        b = False
        for index, i in enumerate(str(num)):
            if i == '6' and not b:
                ans += '9'
                b = True
            else:
                ans += i
                
        return ans