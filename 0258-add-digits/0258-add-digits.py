class Solution:
    def addDigits(self, num: int) -> int:
        
        while(num//10 != 0):
            sum = 0
            for i in str(num):
                sum += int(i)
            num = sum
        return num