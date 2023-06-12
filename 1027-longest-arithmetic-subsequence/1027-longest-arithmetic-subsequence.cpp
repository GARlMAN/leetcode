class Solution {
public:
    int dp[1010][1002] = {0};
    int longestArithSeqLength(vector<int>& nums) {
        int ans = 1;
        for(int i = 0; i < nums.size(); ++i){
            for(int j = 0; j < i; ++j){
                int diff = nums[i] - nums[j];
                if(diff < 0)
                    diff = abs(diff) + 501;
                    
                if(dp[diff][j] == 0)
                    dp[diff][i]  = 2;
                else
                    dp[diff][i]  = 1 + dp[diff][j] ;
                ans = max(dp[diff][i] , ans);
            }
        }
        return ans;
    }
    
};