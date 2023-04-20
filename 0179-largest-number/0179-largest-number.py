class Solution:
    def larger(self, num1, num2):
        if(num1 + num2 > num2 + num1):
            return False
        return True
        
    def largestNumber(self, nums: List[int]) -> str:
        for i in range(0, len(nums)):
            nums[i] = str(nums[i])
        for i in range(0, len(nums)):
            for j in range(0, len(nums) - 1 - i):
                if(self.larger(nums[j], nums[j + 1])):
                    temp = nums[j]
                    nums[j] = nums[j + 1]
                    nums[j + 1] = temp
                
        return str(int("".join(nums)))
        