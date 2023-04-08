class Solution:
    def removeKdigits(self, num: str, k: int) -> str:
        #this works while maintiang a stack
        stack = []
        #go through all values
        for i in num:
            #maintaining a monotonic  stack
            while k > 0 and stack and stack[-1] > i:
                stack.pop()
                k -= 1
            stack.append(i)
        #removing extra values in stack if it doesn't pop
        stack = stack[:len(stack) - k]
        res  = "".join(stack)
        return str(int(res)) if res else "0"