class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int st = 0;
        int ans = 0;
        int count = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] == 0)
                count++;
            while(count > k){
                if(nums[st] == 0)
                    count--;
                st++;
            }
            ans = max(ans, i - st + 1);
        }
        return ans;
    }
};