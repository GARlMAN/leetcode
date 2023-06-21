class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = INT_MAX;
        
        for(auto num : nums)
            ans = min(num, ans);
        return ans;
    }
};