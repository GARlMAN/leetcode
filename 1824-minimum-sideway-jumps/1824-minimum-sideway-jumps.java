class Solution {
    public int minSideJumps(int[] obstacles) {
        int []dp = new int[]{1, 0, 1};
        for(int obstacle : obstacles){
            if(obstacle > 0)
                dp[obstacle - 1] = 10000000;
            for(int i = 0; i < 3; ++i){
                if(i + 1 != obstacle)
                    dp[i]= Math.min(dp[i], Math.min(dp[(i + 1)%3], dp[(i + 2)%3]) + 1);
            }
        }
        return Math.min(dp[0], Math.min(dp[1], dp[2]));
    }
}