class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int> dp(s.size() + 1, 0);
        int n = s.size() - 1;
        dp[n + 1] = 1;
        //working
        for(int i = n; i >= 0; --i){
            
            for(int j = 0; j < wordDict.size(); ++j){
                int wordsize = wordDict[j].size();
                if(i + wordsize > n + 1)
                    continue;
                string temp = s.substr(i, wordsize);
                
                int a = compare(temp, wordDict[j]);

                dp[i] = max(dp[i], min(a, dp[i + wordsize]));
            }
        }
        return dp[0];
    }
    bool compare(string s1, string s2){
        return s1 == s2;  
    }

};