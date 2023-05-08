class Solution:
    def numSubseq(self, nums: List[int], target: int) -> int:
        nums.sort()
        ans = 0
        mod = 10**9 + 7 
        r = len(nums) - 1
        for i in range(0, len(nums)):
            while(nums[i] + nums[r] > target and i <= r):
                r -= 1
            if(i <= r):
                ans += (2 ** (r - i)) % mod
                
        return ans% mod

                    