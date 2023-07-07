class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        if(nums.size() <= 2)
            return true;
        int count = 0;
        int n = nums.size() - 1;
        int max_ans = nums[0];
        for(int i = 0; i <= n; ++i){
            max_ans = max(max_ans, nums[i]);
            if(max_ans > nums[i])
                count++;
        }
        int ans = 0;
        int min_ans = nums[n];
        for(int i = n; i >= 0; --i){
            min_ans = min(min_ans, nums[i]);
            if(min_ans < nums[i])
                ans++;
        }
        
        
        return min(ans, count) > 1 ? false : true;
    }
};