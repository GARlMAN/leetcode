class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans_max = nums[0];
        int ans_min = nums[0];
        int ans = nums[0];
        for(int i = 1; i < nums.size(); ++i){
            int temp = ans_max;
            ans_max = max(ans_max * nums[i], max(nums[i], ans_min*nums[i]));
            ans_min = min(ans_min * nums[i],  min(nums[i], temp * nums[i]));
            cout << ans_min << endl;
            ans = max(ans, ans_max);
        }
        return ans;
    }
};
