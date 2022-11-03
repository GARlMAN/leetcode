class Solution:
    def longestPalindrome(self, words: List[str]) -> int:
        dic = {}
        for i in words:
            if i in dic:
                dic[i] += 1
            else:
                dic[i] = 1
                
        count = 0 
        b = False
        for i in dic:
            a = i[::-1]
            if a == i and dic[a] % 2 != 0 and b == False:
                b = True
                print(b)
            if a in dic:
                if(i != i[::-1]):
                    count += min(dic[i], dic[a])*(len(i))
                elif(i == i[::-1]):
                    count += dic[i]//2*2*len(i)
                
        if(b == True):
            return count+2
            
        return count
                 
        