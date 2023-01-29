class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        dp = {}


        def solve(i, buying):
            if i >= len(prices):
                return 0

            if (i, buying) in dp:
                return dp[(i, buying)]


            cooldown = solve(i + 1, buying)
            if buying:
                buy = solve(i + 1, not buying) - prices[i]
                dp[(i, buying)] = max(buy, cooldown)
            else:
                sell = solve(i + 2, not buying) + prices[i]
                dp[(i, buying)] = max(sell, cooldown)

            return dp[(i, buying)]

        return solve(0, True)