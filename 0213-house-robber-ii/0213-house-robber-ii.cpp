class Solution {
public:
    int rob(vector<int>& nums) {
        int ans = nums[0];
        if(nums.size() == 1)
            return ans;
        int a1 = 0;
        int a2 = 0;
        for(int i = 0; i < nums.size() - 1; ++i){
            int temp = a2;
            a2 = max(a1 + nums[i], a2);
            a1 = temp;
        }
        ans = max(a1, a2);
        a1 = 0;
        a2 = 0;
        for(int i = 1; i < nums.size(); ++i){
            int temp = a2;
            a2 = max(a1 + nums[i], a2);
            a1 = temp;
        }
        ans = max(ans, max(a1, a2));
        return ans;
    }
};