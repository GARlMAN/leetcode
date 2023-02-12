class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        if(sum(nums) % 2 != 0):
            return False
        dp = set()
        dp.add(0)
        target = sum(nums)// 2
        for i in nums:
            copydp = set()
            for t in dp:
                if( t + i )== target:
                    return True
                copydp.add(t + i)
                copydp.add(t)
                
            dp = copydp
        return False
                
                