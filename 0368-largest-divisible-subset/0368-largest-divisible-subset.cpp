class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        vector <vector <int>> dp(nums.size() + 1);
        vector<int> ans = dp[0];
        //sorting the given nums
        sort(nums.begin(), nums.end());
        //starting from the back
        for(int i = nums.size() - 1; i >= 0; --i){
            dp[i].push_back(nums[i]);
            ans = ans.size() > dp[i].size() ? ans : dp[i];
            //checking if a bettre combinations exists
            for(int j = i + 1; j < nums.size(); ++j){
                if(nums[j] % nums[i] == 0){
                    //if it does appednign it
                    if(dp[i].size() < dp[j].size() + 1){
                        dp[i] = dp[j];
                        dp[i].push_back(nums[i]);
                        //biiger ans
                        ans = ans.size() > dp[i].size() ? ans : dp[i];
                    }
                        
                }
            }
        }
        //returning ans
        return ans;
    }
};