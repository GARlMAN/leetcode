class Solution {
    public String longestPalindrome(String s) {
        
        //dp array
         String dp[][] = new String[s.length()][s.length()];
        int ans_i = 0;
        int ans_j = 0;
        
        //dp array
        String ans = "";
        
        
        for(int k = 0; k < dp.length; ++k){
            
            //loops over filling half the dp array
            for(int i = 0, j = k; j < dp.length; j++, i++){
                
                //works for the "a" edge case
                if(k == 0){
                    dp[i][j] = s.charAt(i) + "";
                }
                else if(k == 1){
                    
                    //worjs for the "BB" edge case
                    if(s.charAt(i) == s.charAt(j)){
                        dp[i][j] = "" + s.charAt(i) + "" + s.charAt(j) + "";
                         System.out.print( s.charAt(i) + "" + s.charAt(j) );
                    }
                    else
                        dp[i][j] = "";
                }
                else{
                    
                    //checks the previoly computed palindrome to check and use dp
                    if(s.charAt(i) == s.charAt(j) && dp[i + 1][j - 1] != "")
                        dp[i][j] = s.charAt(i) +  dp[i + 1][j - 1] + s.charAt(j);
                    else
                        dp[i][j] = "";
                }
                
                ans = (dp[i][j]).length() > ans.length() ? dp[i][j] : ans;
            }
        }
        
        //print the array
        // for(int k = 0; k < dp.length; ++k){
        //     for(int i = 0; i < dp.length; ++i){
        //         System.out.print(dp[k][i] + " ");
        //     }
        //      System.out.println();
        // }
        return ans;
    }
}