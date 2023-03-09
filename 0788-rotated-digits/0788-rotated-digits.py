class Solution:
    def rotatedDigits(self, n: int) -> int:
        dp = [-1, -1, True, False, False, True, True, False, -1, True] + [False] * n
        ans = 0
        for i in range(1, n + 1):
            str_num = str(i)
            if(len(str_num) == 1):
                if(dp[i] == True):
                    ans += 1
            else:
                first_num = int(str_num[0])
                rest = int(str_num[1 : len(str_num)])
                
                if((dp[first_num] or dp[first_num] == -1) and dp[rest] == True ):
                    print(i)
                    ans += 1
                    dp[i] = True
                elif(dp[first_num] == True and (dp[rest] == True or dp[rest] == -1) ):
                    print(i)
                    ans += 1
                    dp[i] = True
                elif(dp[first_num] == -1 and dp[rest] == -1):
                    dp[i] = -1
            
            
            
        return ans
            