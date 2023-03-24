class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int right = 0;
        int left = 0;
        int ans = 0;
        int zero = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] == 1)
                right++;
            else{
                ans = max(left + right, ans);
                left = right;
                right = 0;
                zero++;
            }
        }
        ans = zero == 0 ? max(left + right, ans) - 1 : max(left + right, ans);
        
        return ans;
    
    }
};