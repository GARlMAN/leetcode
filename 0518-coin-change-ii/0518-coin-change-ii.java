class Solution {
    public int change(int amount, int[] coins) {
        int[][] dp = new int[amount + 1][coins.length + 1];
        for(int i = 0; i < dp.length; ++i)
            for(int j = 0; j < dp[i].length; ++j)
                dp[i][j] = -1;
        
        return sum(amount, amount, coins, 0, dp);
    }
    
      public static int sum(int amount, int target, int[] coins, int j, int[][] dp){
          if(target < 0)
              return 0;
          if(target == 0)
              return 1;
          if(dp[target][j] != -1)
              return dp[target][j];
          int ans = 0;
          for(int i = j; i < coins.length; ++i){
              int a = sum(amount, target - coins[i], coins, i, dp);
              ans += a;
          }
          dp[target][j] = ans;
          return ans;
      }
}