class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, amount + 1);
        sort(coins.begin(), coins.end());
        dp[0] = 0;
        for(int i = 1; i <= amount; ++i){
            for(auto coin : coins){
                if(i - coin >= 0)
                    dp[i] = min(dp[i], 1 + dp[i - coin]);
                else
                    break;
            }
        }
        return dp[amount] == amount + 1 ? -1 : dp[amount];
    }
};