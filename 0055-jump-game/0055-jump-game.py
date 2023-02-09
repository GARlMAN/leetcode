class Solution:
    def canJump(self, nums: List[int]) -> bool:
        i=0
        for index,val in enumerate(nums):
            if(index>i):
                return False
            i=max(i,val+index)
        return True