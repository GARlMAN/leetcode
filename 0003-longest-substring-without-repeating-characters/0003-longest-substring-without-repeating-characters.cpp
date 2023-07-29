class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int i = 0;
        int j = 0;
        int hash[1000] = {0};
        int count = 0;
        while(i < s.size()){
            hash[s[i]] += 1;
            count++;

            while(hash[s[i]] == 2){
                
                hash[s[j]] -= 1;
                count--;
                j++;
            }

            i++;
            ans = max(count, ans);
            
        }
        
        
        
        return ans;
    }
};