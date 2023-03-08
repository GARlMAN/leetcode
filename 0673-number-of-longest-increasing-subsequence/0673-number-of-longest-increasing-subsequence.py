class Solution:
    def findNumberOfLIS(self, nums: List[int]) -> int:

        dp = {}
        lenLIS, res = 0, 0
        
        for i in range(len(nums) - 1, -1, -1):
            maxLen, maxCnt = 1, 1
            for j in range(i, len(nums)):
                if(nums[i] < nums[j]):
                    length, count = dp[j]
                    if(length + 1 > maxLen):
                        maxLen = length + 1
                        maxCnt = count
                    elif(length + 1 == maxLen):
                        maxCnt += count
                        
            dp[i] = [maxLen, maxCnt]
            
            if lenLIS < maxLen:
                lenLIS, res = maxLen, maxCnt
            elif lenLIS == maxLen:
                res += maxCnt
                    
            
            
        return res
                
        