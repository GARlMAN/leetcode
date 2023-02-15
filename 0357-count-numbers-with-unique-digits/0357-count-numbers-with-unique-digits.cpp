class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        vector <int> dp(n + 1);
        if(n == 0)
            return 1;
        dp[0] = 1;
        dp[1] = 10;
        int t = 9, j = 9;
        for(int i = 2; i <= n; ++i){
            t *= j;
            j--;
            dp[i] = t + dp[i - 1];
        }
        return dp[n];
    }
};