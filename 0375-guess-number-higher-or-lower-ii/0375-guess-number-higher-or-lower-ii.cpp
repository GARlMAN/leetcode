class Solution {
public:
    
    int getMoneyAmount(int n) {
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solve(1, n, dp);
    }
    int solve(int start, int end, vector<vector<int>> &dp){
        if(end <= start)
            return 0;
        if(dp[start][end]  != -1)
            return dp[start][end] ;
        
            
        int ans = INT_MAX;
        for(int i = start; i <= end; ++i){
            int left = i + solve(start, i - 1, dp);
            int right = i + solve(i + 1, end, dp);
            ans = min(ans, max(left, right));
        }
        dp[start][end]  = ans;
        return ans;
    }
};