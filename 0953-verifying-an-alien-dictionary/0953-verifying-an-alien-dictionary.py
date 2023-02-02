class Solution:
    def isAlienSorted(self, words: List[str], order: str) -> bool:
        order_dic = {c : i for i, c in enumerate(order)}

        for i in range(len(words) - 1):
            w1 = words[i]
            w2 = words[i + 1]
            print(w1, w2)
            for j in range(len(w1)):
                if j == len(w2):
                    return False
                if order_dic[w1[j]] == order_dic[w2[j]]:
                    continue
                elif order_dic[w1[j]] < order_dic[w2[j]]:
                    print("hi")
                    break
                else:
                    return False
        
        
        
        
        
        return True