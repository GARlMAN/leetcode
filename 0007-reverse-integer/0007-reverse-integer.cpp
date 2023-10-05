class Solution {
public:
    int reverse(long long x) {
        long long ans = 0;
        int t =  x;
        while(x){
            int num = x % 10;
            x /= 10;
            ans *= 10;
            if(t > 0 && ans > INT_MAX || t < 0 && ans * (-1) > INT_MAX)
                return 0;
            ans += num;
        }

        return ans;
    }
};