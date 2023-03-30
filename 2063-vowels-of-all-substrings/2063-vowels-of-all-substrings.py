class Solution:
    def countVowels(self, word: str) -> int:
        vowels = ['a', 'e' , 'i', 'o', 'u']
        ans = 0
        for index, i in enumerate(word):
            if i in vowels:
                ans += (index + 1) + (index + 1) *  (len(word) - index - 1)
                
        return ans