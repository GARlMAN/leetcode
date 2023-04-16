class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        a = 0
        ans = []
        while(a < len(nums)):
            temp = str(nums[a])
            while(a < len(nums) - 1 and nums[a] + 1 == nums[a + 1]):
                a += 1
            if temp != str(nums[a]):
                temp += "->" + str(nums[a])
            ans.append(temp)
            a += 1
            
        return ans
            