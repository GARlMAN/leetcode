class Solution:
    def isHappy(self, n: int) -> bool:
        hashMap = {}
        while(n != 1):
            ans = 0
            if n in hashMap:
                return False
            hashMap[n] = 1
            for i in str(n):
                ans += int(i) * int(i)
            n = ans
        return True
            
