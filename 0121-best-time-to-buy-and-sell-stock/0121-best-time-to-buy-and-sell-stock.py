class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        result = 0
        min_val, max_val = prices[0], prices[0]
        for price in prices:
            if price > max_val:
                max_val = price
            elif price < min_val:
                if (new_result := max_val - min_val) > result:
                    result = new_result
                min_val = max_val = price
        if (new_result := max_val - min_val) > result:
            return new_result
        else: 
            return result