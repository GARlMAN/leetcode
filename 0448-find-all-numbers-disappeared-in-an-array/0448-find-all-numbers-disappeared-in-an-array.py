class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        ans = []
        for index, i in enumerate(nums):
            nums[abs(i) - 1] = -abs(nums[abs(i) - 1])
        for index, i in enumerate(nums):
            if(i > 0):
                ans.append(index + 1)
        return ans            