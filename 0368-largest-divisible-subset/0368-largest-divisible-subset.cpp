class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        vector <vector <int>> dp(nums.size() + 1);
        vector<int> ans = dp[0];
        sort(nums.begin(), nums.end());
        for(int i = nums.size() - 1; i >= 0; --i){
            dp[i].push_back(nums[i]);
            ans = ans.size() > dp[i].size() ? ans : dp[i];

            for(int j = i + 1; j < nums.size(); ++j){
                if(nums[j] % nums[i] == 0){
                    if(dp[i].size() < dp[j].size() + 1){
                        dp[i] = dp[j];
                        dp[i].push_back(nums[i]);
                        ans = ans.size() > dp[i].size() ? ans : dp[i];
                    }
                        
                }
            }
        }
        return ans;
    }
};