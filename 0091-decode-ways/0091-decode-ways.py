class Solution:
    def numDecodings(self, s: str) -> int:
        dp = [0]*len(s)

        def dfs(i):
            if(i >= len(s)):
                return 1
            if(dp[i]):
                return dp[i]
            temp1 = int(s[i : i + 1])
            temp2 = int(s[i : i + 2])
            ans = 0
            if(not temp1):
                return 0
            ans += dfs(i + 1)
            if(temp1 != temp2 and temp2 <= 26):
                ans += dfs(i + 2)
            dp[i] = ans
            return dp[i]

            
        return dfs(0)