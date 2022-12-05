class Solution:
    def romanToInt(self, s: str) -> int:
        arr1=['I',1,'V',5,'X',10,'L',50,'C',100,'D',500,'M',1000,]
        arr2=[]
        a=0
        for i in s:
            for j in range(len(arr1)):
                if i==arr1[j]:
                    arr2.append(arr1[j+1])
        for i in range(len(arr2)-1):
            if arr2[i]<arr2[i+1]:
                a=a-arr2[i]
            else:
                a=a+arr2[i]
        return a+arr2[-1]