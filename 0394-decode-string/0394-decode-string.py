class Solution:
    def decodeString(self, s: str) -> str:
        currString = ''
        num = ''
        stack = []
        for i in s:
            
            if i == '[':
                stack.append(currString)
                stack.append(num)
                currString = ''
                num = ''
            elif i == ']':
                prevnum = stack.pop()
                prevString = stack.pop()
                currString =prevString + int(prevnum) * currString
            elif i.isdigit():
                num += i
            else:
                currString += i

        return currString