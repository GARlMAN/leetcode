class Solution:
    def numberToWords(self, num: int) -> str:
        if(num == 0):
            return "Zero"
        ones = ["", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"]
        tens = ["", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"]
        ones_tens = ["Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"]
        tenth_values = ["", "Thousand", "Million", "Billion"]
        num = str(num)
        end = len(num)
        j = 0
        ans = []
        while(end > 0):
            start = end - 3 if end-3 >= 0 else 0
            temp_string = num[start : end]
            temp_string = str(int(temp_string))
            ones_ans = ""
            two_ans = ""
            three_ans = ""
            temp_ans = []
            if(len(temp_string) >= 1):
                ones_ans += ones[int(temp_string[-1])]
            if(len(temp_string) >= 2):
                if(temp_string[-2] == '1'):
                    ones_ans = ""
                    two_ans = ones_tens[int(temp_string[-1])] 
                else:
                    two_ans = tens[int(temp_string[-2])] 
            if(len(temp_string) == 3):
                three_ans = ones[int(temp_string[-3])] + " " + "Hundred"

            if(three_ans != ""):
                temp_ans.append(three_ans)
            if(two_ans != ""):
                temp_ans.append(two_ans)
            if(ones_ans != ""):
                temp_ans.append(ones_ans)
            if(j != 0 and (ones_ans != "" or two_ans != "" or three_ans != "")):
                temp_ans.append(tenth_values[j])
            if(" ".join(temp_ans) != ""):
                ans.append(" ".join(temp_ans))
         
            
            
            j += 1
            end = start
        ans = ans [::-1]
        return " ".join(ans)
        