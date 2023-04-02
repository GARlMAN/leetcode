class Solution {
public:
    int minSideJumps(vector<int>& obstacles) {
        map<pair<int,int>,int> dp;
        return solve(2, 0, obstacles, dp);
    }
    
    
    int solve(int pos, int i, vector<int>& obstacles, map<pair<int,int>,int> &dp){

               
        if(dp[{pos, i}])
            return dp[{pos, i}]; 
        int ans = INT_MAX;
        
        
        for(int k = i; k < obstacles.size() - 1; k++){
            if(pos == obstacles[k + 1]){
                for(int j = 1; j <= 3; ++j){
                    if(pos != j && j != obstacles[k])
                        ans = min(ans, 1 + solve(j, k, obstacles, dp));
                }
                dp[{pos, i}] = ans;
                return ans;
            }            
        }

            
        return 0;
    }
};