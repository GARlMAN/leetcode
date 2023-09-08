class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); ++i)
            if(nums[abs(nums[i])  - 1] > 0)
                nums[abs(nums[i])  - 1] = -1 * nums[abs(nums[i]) - 1];
        else
            ans = abs(nums[i]);
        
        return ans;
            
         

        
        
    }
};