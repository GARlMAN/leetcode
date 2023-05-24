class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        hash_map = {}
        start = 0
        ans = 0
        maxv = 0
        for i in range(len(s)):
            hash_map[s[i]] = 1 + hash_map.get(s[i], 0)
            maxv = max(maxv, hash_map[s[i]])
            while (i - start + 1) - maxv > k:
                hash_map[s[start]] -= 1
                start += 1
                
            ans = max(ans, i - start + 1)
            
        return ans