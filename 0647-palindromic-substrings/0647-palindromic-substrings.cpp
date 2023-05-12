class Solution {
public:
    int countSubstrings(string s) {
        //assing a dp array of n*n
        vector<vector<int>> dp(s.size(), vector<int> (s.size(), 1));
        int ans = s.size();
        
        
        for(int i = 1; i < s.size(); ++i){
            for(int row = 0, col = i; col < s.size(); ++col, row++){
                //check for aa edge case
                if(i == 1)
                    dp[row][col] = s[row] == s[col] ? 1 : 0;
                //assingin alrady calculated value to find the palindrome
                else
                    dp[row][col] = s[row] == s[col] ? dp[row + 1][col - 1] : 0;
                //adding to the answer
                ans += dp[row][col];  
            }
        }
        
        
        return ans;
    }
};