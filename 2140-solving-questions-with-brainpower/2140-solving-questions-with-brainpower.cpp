class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        long long dp[200001] = {};
        
        for(int i = questions.size() - 1; i >= 0; --i){
            //
            long long added = dp[i + questions[i][1] + 1] + questions[i][0];
            long long notadded = dp[i + 1];
            dp[i] = max(added, notadded);
        }
        return dp[0];
    }
};