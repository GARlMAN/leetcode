class Solution:
    def isPalindrome(self, s: str) -> bool:
        ans = ""
        for i in s:
            if i.isalpha() or i.isnumeric():
                ans += i.lower()
        print(ans)
        if(ans == ans[::-1]):
            return True
        else:
            return False
        