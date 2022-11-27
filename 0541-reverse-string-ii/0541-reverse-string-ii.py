class Solution:
    def reverseStr(self, s: str, k: int) -> str:
        ans = ''
        for i in range(0, len(s), k):
            a = s[i:(i + k)]
            if((i / k)%2 == 0):
                ans = ans + a[::-1]
            else:
                ans = ans + a
                
            
        return ans
        