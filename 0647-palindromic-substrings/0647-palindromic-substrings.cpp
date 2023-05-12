class Solution {
public:
    int countSubstrings(string s) {
        
        vector<vector<int>> dp(s.size(), vector<int> (s.size(), 1));
        int ans = s.size();
        for(int i = 1; i < s.size(); ++i){
            for(int row = 0, col = i; col < s.size(); ++col, row++){
                if(i == 1)
                    dp[row][col] = s[row] == s[col] ? 1 : 0;
                else
                    dp[row][col] = s[row] == s[col] ? dp[row + 1][col - 1] : 0;
                ans += dp[row][col];
                
                
                
                
            }
            
            
            
        }
        
        
        return ans;
    }
};