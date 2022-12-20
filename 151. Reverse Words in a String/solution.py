class Solution:
    def reverseWords(self, s: str) -> str:
        a = ""
        ans = ""
        start = False
        for index, i in enumerate(s):
            if i != " ":
                a += i
                start = True
            elif i == " " and start == True:
                ans = a + " " + ans
                a = ""
                start = False

        if(len(a) != 0):
            ans = a + " " + ans

        return ans[:-1]
