class Solution {
public:
    //main function
    int getMoneyAmount(int n) {
        // all the start --- end combination
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        
        //returning the max function
        return solve(1, n, dp);
    }
    int solve(int start, int end, vector<vector<int>> &dp){
        
        //as last element and after that are not counted
        if(end <= start)
            return 0;
        
        //if not -1
        if(dp[start][end]  != -1)
            return dp[start][end] ;
        
            
        int ans = INT_MAX;
        // solving for left and right then passing i - 1 and i + 1 into solve
        for(int i = start; i <= end; ++i){
            int left = i + solve(start, i - 1, dp);
            int right = i + solve(i + 1, end, dp);
            ans = min(ans, max(left, right));
        }
        //setting dp value
        dp[start][end]  = ans;
        return ans;
    }
};