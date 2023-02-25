class Solution {
    public int longestCommonSubsequence(String text1, String text2) {
        int [][] dp = new int[text1.length() + 1][text2.length() + 1];
        for(int i = 0; i < dp.length; ++i)
            for(int j = 0; j < dp[i].length; ++j)
                dp[i][j] = -1;
        
        
        return solve(text1, text2, 0, 0, dp);
    }
    
    static int solve(String text1, String text2, int i, int j, int [][] dp){
        if(text1.length() <= i || text2.length() <= j)
            return 0;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        if(text1.charAt(i) == text2.charAt(j)){
            dp[i][j] = 1 + solve(text1, text2, i + 1, j + 1, dp);
            return  dp[i][j];
        }
            
        else{
            dp[i][j] = Math.max(solve(text1, text2, i + 1, j, dp), solve(text1, text2, i, j + 1, dp));
            return dp[i][j];
            
        }
            
    }
}