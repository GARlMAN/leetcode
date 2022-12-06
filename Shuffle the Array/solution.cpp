class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int j = 0;
        vector<int> ans;
        for(int i = 0; i < n; j = j+2, ++i){
            ans.push_back(nums[i]);
            ans.push_back(nums[i + n]);
        }
        return ans;
    }
};