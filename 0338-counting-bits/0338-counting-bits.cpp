class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp(n + 1, 0);
        int k = 1;
        int count = 0;
        for(int i = 1; i <= n; ++i){

            dp[i] = 1 + dp[i - k];
            count++;
            if(count == k)
                count = 0, k *= 2;
        }
        return dp;
    }
};