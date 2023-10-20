class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int i = a.size() - 1, j = b.size() - 1, carry = 0;
        while(i >= 0 || j >= 0 || carry){
            int temp1 = i >= 0 ? a[i] - '0' : 0;
            int temp2 = j >= 0 ? b[j] - '0' : 0;
            int sum = temp1 + temp2 + carry;
            carry = sum > 1 ? 1 : 0;
            char an = sum % 2 + '0';
            ans = an + ans;
            i--, j--;
            
        }
        return ans;
    }
};