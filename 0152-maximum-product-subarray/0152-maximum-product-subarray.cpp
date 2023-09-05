class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int low = nums[0];
        int hi = nums[0];
        int ans = nums[0];
        for(int i = 1; i < nums.size(); ++i){
            int temp = hi;
            hi = max(hi*nums[i], max(low*nums[i], nums[i]));
            low = min(temp*nums[i], min(low*nums[i], nums[i]));
            ans = max(ans, hi);
        }
        return ans;
    }
};