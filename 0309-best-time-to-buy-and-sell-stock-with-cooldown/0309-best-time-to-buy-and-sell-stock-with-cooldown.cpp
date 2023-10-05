class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        return solve(prices, 0, true);
    }
    map<pair<int, bool>, int> dp;
    
    int solve(vector<int>& prices, int i, bool buying){
        if(i >= prices.size())
            return 0;
        if(dp[{i, buying}])
            return  dp[{i, buying}] == -1 ? 0 : dp[{i, buying}];;
        
        int notbuying = solve(prices, i + 1, buying);
        if(buying){
            int buy = solve(prices, i + 1, !buying) - prices[i];
            dp[{i, buying}] = max(notbuying, buy);
            
        }
        else{
            int sell = solve(prices, i + 2, !buying) + prices[i];
            dp[{i, buying}] = max(notbuying, sell);
        }
        dp[{i, buying}] = dp[{i, buying}] == 0 ? -1 : dp[{i, buying}];
        return dp[{i, buying}] == -1 ? 0 : dp[{i, buying}];
    }
};