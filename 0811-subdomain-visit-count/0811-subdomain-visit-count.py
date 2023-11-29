class Solution:
    def subdomainVisits(self, cpdomains: List[str]) -> List[str]:
        hash_table = {}
        for domain in cpdomains:
            num = ""
            dom = ""
            dots = [-1]
            i = 0
            for ch in domain:
                if ch. isnumeric():
                    num += ch
                elif ch != " ":
                    if(ch == "."):
                        dots.append(i)
                    i += 1
                    dom += ch
            for dot in range(len(dots)):
                if(dom[dots[dot] + 1::] in hash_table):
                    hash_table[dom[dots[dot] + 1::]] += int(num)
                else:
                    hash_table[dom[dots[dot] + 1::]] = int(num)
        print(hash_table)
        ans = []
        for val in hash_table:
            ans.append(str(hash_table[val]) + " " + val)
        return ans