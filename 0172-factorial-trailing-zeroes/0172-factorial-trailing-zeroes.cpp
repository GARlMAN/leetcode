class Solution {
public:
    int trailingZeroes(int n) {
        int val[8] = {0};
        int st = pow(5, 8), position = 7, ans = 0;
        while(n >= 5){
            if(st > n)
                st /= 5, position--;
            else
                val[position] = n / st, n = n % st;
        }
        int count = 1;
        for(int i = 0; i < 8; ++i){
            ans += count * val[i];
            count = (count * 5) + 1;
        }
        
        return ans;
    }
};