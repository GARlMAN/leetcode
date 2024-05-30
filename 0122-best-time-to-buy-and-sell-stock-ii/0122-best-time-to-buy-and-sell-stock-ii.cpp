class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, low = prices[0];
        for(int i = 0; i < prices.size(); ++i){
            low = min(low, prices[i]);
            ans += max(0, prices[i] - low);
            if(prices[i] - low > 0)
                low = prices[i];
        }
        return ans;
        
    }
};