class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector <int> dp(nums.size() + 1, 1);
        int ans = 1;
        for(int i = nums.size() - 1; i >= 0; --i){
            for(int j = i; j < nums.size(); ++j){
                if(nums[i] < nums[j]){
                    dp[i] = max(dp[i], dp[j] + 1) ;
                }
            }
            ans = max(ans, dp[i]);
        }


        return ans;


    }


};