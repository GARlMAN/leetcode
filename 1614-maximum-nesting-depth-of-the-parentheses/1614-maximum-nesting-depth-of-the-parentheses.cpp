class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int val = 0;
        for(auto ch : s)
            if(ch == '(')
                val++;
            else if(ch == ')')
                ans = max(ans, val--);
        return ans;
    }
};