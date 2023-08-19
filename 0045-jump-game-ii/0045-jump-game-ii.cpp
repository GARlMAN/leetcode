class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        if(nums.size() == 1)
            return 0;
        int count = 1;
        while(k + nums[k] < n - 1){
            count++;
            int jump = 0;
            int idx =  k + 1;
            for(int i = k + 1; i <= k + nums[k]; ++i){
                idx = i + nums[i] > jump ? i : idx;
                jump = max(jump, i + nums[i]);
                
            }
            k = idx;
        }
        return count;
    }
};