class Solution {
    public int longestPalindromeSubseq(String s) {
        int [][] dp = new int[s.length() + 1][s.length() + 1];
        //reversing the string
        String s2 = new StringBuilder(s).reverse().toString();

            //find the maximum common sub - sequence on string and reversed string
            for(int i = 1; i <= s.length(); ++i){
                for(int j = 1; j <= s.length(); ++j){
                    //addming values to the dp
                    if(s.charAt(i - 1) == s2.charAt(j - 1))
                        dp[i][j] = dp[i - 1][j - 1] + 1; 
                    else
                        dp[i][j] = Math.max(dp[i - 1][j], dp[i][j - 1]);
                    
                }
            }
            return dp[s.length()][s.length()];
            

    }
}