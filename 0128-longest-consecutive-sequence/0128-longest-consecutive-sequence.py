class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        setNum = set(nums)
        ans = 0
        
        for num in nums:
            if(num - 1) not in  setNum:
                longest = 0
                while(num + longest) in setNum:
                    longest += 1
                    
                ans = max(ans, longest)
                
        return ans