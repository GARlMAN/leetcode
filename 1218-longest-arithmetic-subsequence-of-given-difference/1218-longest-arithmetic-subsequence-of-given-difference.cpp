class Solution {
public:

    unordered_map<int, int> dp;
    unordered_map<int, int> dp2;
    int longestSubsequence(vector<int>& arr, int difference ) {       
        int ans = 1;
        for(int k = 0; k < arr.size(); ++k){
            int i = arr[k];
            dp2[i] = 1;
            if(dp2[i - difference] == 1)
                dp[i] = max(dp[i], 1 + dp[i - difference]);
            dp[i] = max(1, dp[i]);
                
            dp[i + difference] = max(dp[i + difference], dp[i]);
            ans = max(ans, dp[i + difference]);
        }

        
        return ans;
    }

};