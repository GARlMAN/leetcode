class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int sum = 0;
        vector<int> ans;
        for(auto num : nums)
            sum += num;
        sort(nums.begin(), nums.end());
        int target = 0;
        for(int i = nums.size() - 1; i >= 0; --i){
            ans.push_back(nums[i]);
            target += nums[i];
            if(target > sum - target)
                return ans;
        }
        return ans;
    }
};