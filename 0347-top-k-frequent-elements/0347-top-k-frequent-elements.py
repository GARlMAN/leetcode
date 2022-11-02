class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        dic = {}
        for i in nums:
            if i in dic.keys():
                dic[i] += 1
            else:
                dic[i] = 1
        res = dict(sorted(dic.items(), key = itemgetter(1), reverse = True)[:k])
        ans = []
        for i in res:
            ans.append(i)
        return ans