class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        ans = []
        for index, i in enumerate(nums):
            if(nums[abs(i) - 1] > 0):
                nums[abs(i) - 1] = -nums[abs(i) - 1]
            else:
                ans.append(abs(i))

        return ans