class Solution {
public:
    int maxProfit(vector<int>& p, int fee) {
        // Base case: 
        int profit = 0; 
        int stocks = -p[0]; 
        for (int i = 1; i < p.size(); i++){

            profit = max(profit, stocks + p[i] - fee);
            stocks = max(stocks, profit - p[i]);
        }
        return profit;
    }
};