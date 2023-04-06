class Solution:
    def numTrees(self, n: int) -> int:
        dp = [-1] * (n + 1)
        #starting value
        dp[0] = 1
        dp[1] = 1
        #go through all numbers
        for i in range(2, n + 1):
            ans = 0
            #use dp to mupltiply the product and add to ans to cal for int(i)
            for j in range(i):
                ans += dp[j] * dp[i - j - 1]
            dp[i] = ans
            
        return dp[n]