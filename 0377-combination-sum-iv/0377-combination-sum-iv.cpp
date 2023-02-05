class Solution {
public:
    
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target+ 1, -1);
        return solve(target, nums, dp);
    }
    
    int solve(int target, vector<int>& nums, vector<int>& dp){
        if(target == 0)
            return 1;
        
        if(target < 0)
            return 0;
        int sum = 0;
        for(int i = 0; i < nums.size(); ++i){
            int a = 0;
            if(target - nums[i] > -1 && dp[target - nums[i]] != -1)               
                a = dp[target - nums[i]];
            else
                a = solve(target - nums[i], nums, dp);
            sum += a;
        }
        cout << dp.size() << endl;
        dp[target] = sum ;
        return sum;
    }
};