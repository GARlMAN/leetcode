class Solution:
    def openLock(self, deadends: List[str], target: str) -> int:
        if "0000" in deadends:
            return -1
        ans = 0
        qu = ["0000"]
        visited = set(deadends)
        def children(val):
            ch = []
            for i in range(4):
                digit = str((int(val[i]) + 1)%10)
                ch.append(val[:i] + digit + val[i + 1:])
                digit = str((int(val[i]) + 9)%10)
                ch.append(val[:i] + digit + val[i + 1:])
            return ch
        while(qu):
            for i in range(len(qu)):
                a = qu.pop(0)
                if(a == target):
                    return ans
                for child in children(a):
                    if child not in visited:
                        qu.append(child)
                        visited.add(child)
            ans += 1
                        
                        
            
        return -1