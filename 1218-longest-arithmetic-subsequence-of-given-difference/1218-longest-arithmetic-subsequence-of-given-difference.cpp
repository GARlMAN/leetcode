class Solution {
public:

    unordered_map<int, int> dp;

    int longestSubsequence(vector<int>& arr, int difference ) {       
        int ans = 1;
        for(int k = 0; k < arr.size(); ++k){
            int i = arr[k];
            ans = max(ans, dp[i] = 1  + dp[i - difference]);
        }

        
        return ans;
    }

};