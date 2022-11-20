class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        int *dp = new int[n];
        dp[0] = arr[0];
        for(int i = 1; i < arr.size(); ++i){
            int max_v = 0;
            int max_val = 0;
            for(int j = i; j >= max(0, i - k + 1); j--){
                max_v = max(max_v, arr[j]);
                if(j > 0)
                    max_val = max(max_val, max_v*(i-j+1) + dp[j-1]);
                else
                    max_val = max(max_val, max_v*(i-j+1));
            }
            dp[i] = max_val;
        }
        return dp[n-1];
    }
};