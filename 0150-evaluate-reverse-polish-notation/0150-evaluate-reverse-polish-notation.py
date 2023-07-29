class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        st = []
        for i in tokens:
            if i.lstrip('-').isdigit():
                st.append(i)

            else:
                exp = 0
                if(i == '+'):
                    exp = int(st[-1]) + int(st[-2])
                elif(i == '-'):
                    exp = int(st[-2]) - int(st[-1])
                elif(i == '*'):
                    exp = int(st[-2]) * int(st[-1])
                elif(i == '/'):
                   
                    exp = int(st[-2]) / int(st[-1])
                    exp = ceil(exp) if exp < 0 else floor(exp)

                st.pop()
                st.pop()
                    
                st.append(str(exp))

        return int(st[0])

            