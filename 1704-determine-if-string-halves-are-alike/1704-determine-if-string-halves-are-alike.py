class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        first_half = s[:len(s)//2]
        second_half = s[len(s)//2:]
        vowels = ['a', 'e', 'i', 'o', 'u']
        higher = 0
        lower = 0
        for i in range(len(first_half)):
            if first_half[i].lower() in vowels:
                lower += 1
            if second_half[i].lower() in vowels:
                higher += 1
                
        return lower == higher
        