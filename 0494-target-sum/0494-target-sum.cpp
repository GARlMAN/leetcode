class Solution {
public:
    int count = 0;
    int findTargetSumWays(vector<int>& nums, int target) {
        solve(0, target, 0, nums);
        return count;
    }
    
    
     void solve(int sum, int target, int j, vector<int> &nums){
        if(j == nums.size()){
            if(target == sum)
                count++;
            return; 
            }
         solve(sum + nums[j], target, j+1, nums);
         solve(sum - nums[j], target, j+1, nums);
    }
};