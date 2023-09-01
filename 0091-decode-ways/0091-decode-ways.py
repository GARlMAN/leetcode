class Solution:
    def numDecodings(self, s: str) -> int:
        dp = [-1]*len(s)

        def dfs(i):
            if(i >= len(s)):
                return 1
            if(dp[i] != -1):
                return dp[i]
            temp1 = int(s[i : i + 1])
            temp2 = int(s[i : i + 2])
            ans = 0
            if(not temp1):
                dp[i] = ans
                return ans
            ans += dfs(i + 1)
            if(temp1 != temp2 and temp2 <= 26):
                ans += dfs(i + 2)
            dp[i] = ans
            return dp[i]

            
        return dfs(0)