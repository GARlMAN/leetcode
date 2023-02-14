class Solution(object):
    def shuffle(self, nums, n):
        return [x for y in list(zip(nums[:n], nums[n:])) for x in y]