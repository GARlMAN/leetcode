class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size() - 1;
        int curr = n;
        for(int i = n - 1; i >= 0; --i){
            if(i + nums[i] >= curr)
                curr = i;
        }
        
        return curr == 0;
    }
};