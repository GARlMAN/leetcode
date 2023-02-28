class Solution {
    public String longestPalindrome(String s) {
         String dp[][] = new String[s.length()][s.length()];
        int ans_i = 0;
        int ans_j = 0;
        String ans = "";
        for(int k = 0; k < dp.length; ++k){
            for(int i = 0, j = k; j < dp.length; j++, i++){
                if(k == 0){
                    dp[i][j] = s.charAt(i) + "";
                }
                else if(k == 1){
                    if(s.charAt(i) == s.charAt(j)){
                        dp[i][j] = "" + s.charAt(i) + "" + s.charAt(j) + "";
                         System.out.print( s.charAt(i) + "" + s.charAt(j) );
                    }
                    else
                        dp[i][j] = "";
                }
                else{
                    if(s.charAt(i) == s.charAt(j) && dp[i + 1][j - 1] != "")
                        dp[i][j] = s.charAt(i) +  dp[i + 1][j - 1] + s.charAt(j);
                    else
                        dp[i][j] = "";
                }
                
                ans = (dp[i][j]).length() > ans.length() ? dp[i][j] : ans;
            }
        }
        // for(int k = 0; k < dp.length; ++k){
        //     for(int i = 0; i < dp.length; ++i){
        //         System.out.print(dp[k][i] + " ");
        //     }
        //      System.out.println();
        // }
        return ans;
    }
}