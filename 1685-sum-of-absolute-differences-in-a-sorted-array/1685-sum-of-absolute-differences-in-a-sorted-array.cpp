class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int sum = 0;
        vector<int> ans;
        for(auto i : nums)
            sum += i;
        
        int b = 0;
        for(int i = 0; i < nums.size(); ++i){
            b += nums[i];
            int a = (nums[i] * (i + 1) - b) + (sum - b - nums[i] * (nums.size() - i - 1));
            ans.push_back(a);
        }
            
        return ans;
    }
};