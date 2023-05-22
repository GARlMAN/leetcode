class Solution:
    def stoneGame(self, piles: List[int]) -> bool:
        dp = {}
        def solve(l, r):
            if l > r:
                return 0
            if(l, r) in dp:
                return dp[(l, r)]
            even = True if (r - l) % 2 else False
            left = piles[l] if even else 0
            right = piles[r] if even else 0
            dp[(l, r)] = max(solve(l + 1, r) + left, solve(l, r - 1) + right) if even else min(solve(l + 1, r) + left, solve(l, r - 1) + right)

            return dp[(l, r)]
        ans = solve(0, len(piles) - 1)    
        return ans > (sum(piles)/2)