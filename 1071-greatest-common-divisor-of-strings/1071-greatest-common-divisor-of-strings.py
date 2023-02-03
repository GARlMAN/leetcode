class Solution(object):
    def gcdOfStrings(self, str1, str2):
        """
        :type str1: str
        :type str2: str
        :rtype: str
        """
        def gcd(a, b):
            while b:
                a, b = b, a%b
            return a

        if str1 + str2 != str2 + str1:
            return ""
        
        if len(str1) < len(str2):
            str1, str2 = str2, str1
        
        return str1[:gcd(len(str1), len(str2))]