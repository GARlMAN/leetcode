class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> dp(nums.size(), 1);
        int ans = -1;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); ++i){
            int j = i - 1;
            int temp = INT_MIN;
            while(j > -1){
                
                if(nums[i] != nums[j] + 1)
                    temp = max(temp, dp[j]);
                j--;             
            }
                
            if(temp == INT_MIN)
                dp[i] = nums[i];
            else
                dp[i] = nums[i] + temp;
            ans = max(ans, dp[i]);
            
            
        }
        return ans;
    }
};