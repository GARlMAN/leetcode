class Solution:
    def digitSum(self, s: str, k: int) -> str:
        ans = ""
        j = 0
        if len(s) <= k:
            return s
        while(len(s) > k):
            ans = ""
            a = 0
            for index, i in enumerate(s):
                if(index % k == 0 and index != 0):
                    ans += str(a)
                    a = 0
                a += int(i)

            ans += str(a)
            s = ans
            j += 1
        return ans