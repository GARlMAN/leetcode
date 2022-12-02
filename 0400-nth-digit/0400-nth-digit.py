class Solution:
    def findNthDigit(self, n: int) -> int:
        i = 1
        count = 9
        
        while n > i * count:
            n -= count*i
            i += 1
            count *= 10
            
        start_num = 10 ** (i - 1)
        q, r = divmod(n, i)

        if r == 0:
            return int(str(start_num  + q - 1)[-1])
        else:
            return int(str(start_num + q)[r - 1])
        