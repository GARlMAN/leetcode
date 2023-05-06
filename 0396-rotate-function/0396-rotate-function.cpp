class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int F = 0;
        int sum = 0;
        for(int i = 0; i < nums.size(); ++i){
            F += i * nums[i];
            sum += nums[i];
        }
        int ans = F;
        //F[i - 1] = F[i] + sum - nums[n] * n
        for(int i = nums.size() - 1; i > 0; --i){
            F = F + sum - nums.size() * nums[i];
            ans = max(ans, F);      
        }
        return ans;
    }
};