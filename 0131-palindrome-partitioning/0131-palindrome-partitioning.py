class Solution:
    def partition(self, s: str) -> List[List[str]]:
        ans = []
        temp = []

        def dfs(i):
            if i >= len(s):
                ans.append(temp.copy())
                return

            for n in range(i, len(s)):
                if self.isPalindrome(s, i, n):
                    temp.append(s[i: n + 1])
                    dfs(n + 1)
                    temp.pop()
        dfs(0)
        return ans
    def isPalindrome(self, s, i , n):
        a = s[i : n + 1]
        return a == a[::-1]