class Solution:
    def decodeString(self, s: str) -> str:
        hash_map = [0] * len(s)
        def solve(j):
            ans = ''
            num = ''
            for i in range(j, len(s)):
                if(s[i].isdigit() and hash_map[i] != 1):
                    hash_map[i] = 1
                    num += s[i]
                elif(s[i] == '[' and hash_map[i] != 1):
                    hash_map[i] = 1
                    ans += int(num) * solve(i + 1)
                    num = ''
                elif(s[i] == ']'):
                    if(hash_map[i] != 1):
                        hash_map[i] = 1
                        return ans
                    hash_map[i] = 1 
                elif(s[i]. isalpha() and hash_map[i] != 1):
                    hash_map[i] = 1
                    ans += s[i]        
            return ans 
        
        return solve(0) 