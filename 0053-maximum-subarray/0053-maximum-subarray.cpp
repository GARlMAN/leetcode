class Solution {
public:
    int ans = INT_MIN;
    int sum = 0;
    int maxSubArray(vector<int>& nums) {
        for(auto num : nums){
            sum += num;
            ans = max(ans, sum);
            if(sum < 0)
                sum = 0;
        }
        return ans;
    }
};