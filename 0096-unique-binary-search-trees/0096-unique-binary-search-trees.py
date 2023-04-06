class Solution:
    def numTrees(self, n: int) -> int:
        dp = [-1] * (n + 1)
        dp[0] = 1
        dp[1] = 1
        for i in range(2, n + 1):
            ans = 0
            for j in range(i):
                ans += dp[j] * dp[i - j - 1]
            dp[i] = ans
            
        return dp[n]