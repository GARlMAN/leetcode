class LRUCache:

    def __init__(self, capacity: int):
        self.capacity = capacity
        self.dic = {}
        self.element = 0
    def get(self, key: int) -> int:
        if key not in self.dic:
            return -1
        self.dic[key][1] = self.element
        self.element += 1
        return self.dic[key][0]

    def put(self, key: int, value: int) -> None:
        if key in self.dic:
            self.dic[key] = [value, self.element]
            self.element += 1
            return
        
        
        
        if len(self.dic) == self.capacity:
            min_el = inf
            for val in self.dic:
                if min_el > self.dic[val][1]:
                    min_el = self.dic[val][1]
                    ans = val

            del self.dic[ans]
        
        self.dic[key] = [value, self.element]
        self.element += 1
        


# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)