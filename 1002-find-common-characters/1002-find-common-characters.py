class Solution:
    def commonChars(self, words: List[str]) -> List[str]:

        res = []
        tmp = list(words[0])

        for i in range(1, words.__len__()):

            for j in words[i]:
                if j in tmp:
                    res.append(j)
                    tmp.remove(j)

            if i == len(words) - 1:
                return res
                
            tmp = res
            res = []
        return res