class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size() - 1;
        for(int i = 0; i < nums.size() - 2; ++i){

            if(i != 0 && nums[i] == nums[i - 1])
                continue;
            int j = i + 1, k = n;
            while(j < k){

                if((j != i + 1 && nums[j] == nums[j - 1]) || nums[i] + nums[j] + nums[k] < 0)
                    j++;
                else if((k != n && nums[k] == nums[k + 1]) || nums[i] + nums[j] + nums[k] > 0)
                    k--;
                else
                    ans.push_back({nums[i], nums[j] , nums[k]}), j++, k--;
            }
        }
        return ans;
    }
};