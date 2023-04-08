class Solution:
    def removeKdigits(self, num: str, k: int) -> str:
        stack = []
        for i in num:
            while k > 0 and stack and stack[-1] > i:
                stack.pop()
                k -= 1
            stack.append(i)
        stack = stack[:len(stack) - k]
        res  = "".join(stack)
        return str(int(res)) if res else "0"