class Solution {
public:
    int reverse(long long x) {
        long long ans = 0, val = 0;
        if(x < 0)
            x *= -1, val = 1;
        while(x){
            int num = x % 10;
            x /= 10;
            ans *= 10;
            if(ans > INT_MAX)
                return 0;
            ans += num;
        }
        if(val)
            ans *= -1;
        return ans;
    }
};