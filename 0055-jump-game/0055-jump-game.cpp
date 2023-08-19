class Solution {
public:
    bool canJump(vector<int>& nums) {
        int ans = 0;
        int n = nums.size() - 1;
        int curr = n;
        if(n == 0)
            return true;
        for(int i = n - 1; i >= 0; --i){
            cout << i + nums[i] << " " << curr;
            if(i + nums[i] >= curr)
                curr = i;
        }
        
        return curr == 0;
    }
};