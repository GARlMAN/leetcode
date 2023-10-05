class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
        return solve(coins, amount, 0, dp);
    }
    
    int solve(vector<int>& coins, int amount, int k, vector<vector<int>>& dp){
        if(amount < 0)
            return 0;
        else if(amount == 0)
            return 1;
        if(dp[k][amount] != -1)
            return dp[k][amount];
        int ans = 0;
        for(int i = k; i < coins.size(); ++i)
            ans += solve(coins, amount - coins[i], i, dp);
        
        return dp[k][amount] = ans;
            
    }
};