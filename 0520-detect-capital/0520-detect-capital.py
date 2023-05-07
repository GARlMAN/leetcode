class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        condition1 = True
        condition2 = True
        condition3 = True
        for index, i in enumerate(word):
            if i.isupper():
                condition2 = False
                if(index == 0):
                    condition3 = True
                else:
                    condition3 = False
            if not i.isupper():
                condition1 = False
            
        return condition1 or condition2 or condition3