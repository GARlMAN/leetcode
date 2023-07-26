class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_val = prices[0];
        int ans = 0;
        for(auto num : prices)
            min_val = min(num, min_val), ans = max(num - min_val, ans);
        return ans;
    }
};