def dec(n):
    return bin(n).replace("0b", "")
class Solution:
   

    def hammingWeight(self, n: int):
        # Write your code here
        a = dec(n)
        print("asasd ", a)
        ans = []
        count = 0
        for index, i in enumerate(str(a)):
            if(i == '1'):

                count += 1
 
        return count