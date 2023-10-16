class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        
        return solve(0, target, 0, nums);;
    }
    
    map<pair<int, int>, int> dp;
     int solve(int sum, int target, int j, vector<int> &nums){
        if(j == nums.size()){
            if(target == sum)
                return 1;
            return 0; 
            }
         if(dp[{j, sum}])
             return dp[{j, sum}] == -1 ? 0 : dp[{j, sum}] ;
         int a = solve(sum + nums[j], target, j+1, nums);
         int b = solve(sum - nums[j], target, j+1, nums);
         
         if(a + b == 0){
             dp[{j, sum}] = -1;
             return 0;
         }

             
         return dp[{j, sum}] = a + b;
    }
};