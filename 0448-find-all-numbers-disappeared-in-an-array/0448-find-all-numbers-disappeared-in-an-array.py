class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        h = [0] * (len(nums) + 1)
        ans = []
        for i in nums:
            h[i] += 1
        for index, i in enumerate(h):
            if(i == 0 and index != 0):
                ans.append(index)
        return ans            