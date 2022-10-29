class Solution:
    def reverseVowels(self, s: str) -> str:
        v = {"a","e","i","o","u","A","E","I","O","U"}
        v_string = ""
        ans = ""
        for i in s:
            if i in v:
                v_string = v_string + i
                
        v_string = v_string[::-1]
        
        j = 0
        for index , i in enumerate(s):
            if i in v:
                ans += v_string[j]
                j += 1
            else:
                ans += i
        return ans
        
            
        