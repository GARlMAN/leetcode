class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size() - 1;
        int add = 0;
        for(int i = n; i >= 0; --i){
            if(i == n){
                int sum = digits[i] + 1;
                digits[i] = sum % 10;
                if(sum > 9)
                    add = 1;
            }
            if(i != n && add == 1){
                int sum = digits[i] + 1;
                cout << sum << endl;
                add = 0;
                digits[i] = sum % 10;
                if(sum > 9)
                    add = 1;
            }
            else if(add == 0)
                break;
            }
        if(add == 1)
            digits.insert(digits.begin(), 1);
        return digits;
    }
};