class Solution {
public:
    int minSideJumps(vector<int>& obstacles) {
        //dp of the given array that takes in a pair
        map<pair<int,int>,int> dp;
        return solve(2, 0, obstacles, dp);
    }
    
    
    int solve(int pos, int i, vector<int>& obstacles, map<pair<int,int>,int> &dp){

        //checks if the combinations exists       
        if(dp[{pos, i}])
            return dp[{pos, i}]; 
        int ans = INT_MAX;
        
        //goes in a straight lines till it finds a obstacle in the next tile
        for(int k = i; k < obstacles.size() - 1; k++){
            //checks for obstackle
            if(pos == obstacles[k + 1]){
                //checks all the jumps it can make if obstacle is there
                for(int j = 1; j <= 3; ++j){
                    if(pos != j && j != obstacles[k])
                        ans = min(ans, 1 + solve(j, k, obstacles, dp));
                }
                //stores value in dp
                dp[{pos, i}] = ans;
                return ans;
            }            
        }

        //returns 0 if it no jumps are done    
        return 0;
    }
};