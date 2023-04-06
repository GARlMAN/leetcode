class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = INT_MAX;
        int sum = 0;
        int element = 0;
        int i = 0;
        while(i < nums.size()){
            if(sum < target)
                sum += nums[i];
            while(sum >= target){
                sum -= nums[element];
                element++;
                ans = min(ans, i - element + 2);
            }
            i++;
        }
        return ans == INT_MAX ? 0 : ans;
    }
};