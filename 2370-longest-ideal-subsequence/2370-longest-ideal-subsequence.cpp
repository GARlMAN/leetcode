class Solution {
public:
    unordered_map<int, int> dp;
    int longestIdealString(string s, int k) {
        int dp[150] = {}, res = 0;
        //maintaing a hash map isntead of going over all elements
        for (auto& i : s) {
            
            //checking only values in k range
            for (int j = i - k; j <= i + k; ++j)
                dp[i] = max(dp[i], dp[j]);
            //adding 1 to dp[i] and returning res which is the ans
            res = max(res, ++dp[i]);
        }
        return res;
    }
};