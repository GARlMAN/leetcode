class Solution:
    def maxProfit(self, prices: List[int], fees: int) -> int:
        dp = {}


        def solve(i, buying):
            if i >= len(prices):
                return 0

            if (i, buying) in dp:
                return dp[(i, buying)]


            
            #means waiting it out and not buying or selling on that day
            cooldown = solve(i + 1, buying)
            if buying:
                buy = solve(i + 1, not buying) - prices[i]
                dp[(i, buying)] = max(buy, cooldown)
            else:
                sell = solve(i + 1, not buying) + prices[i] - fees
                dp[(i, buying)] = max(sell, cooldown)

            return dp[(i, buying)]

        return solve(0, True)