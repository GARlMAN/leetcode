class Solution {
public:
    int longestValidParentheses(string s) {

        stack<int> st;
        int ans = 0;
        int current = 0;
        vector<int> values(s.size() + 1, 0);
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == '(')
                st.push(1);
            else{
                // if(st.empty())
                //     values[i] = 0;
                if(!st.empty()){
                    values[i] = 2 + values[i - 1];
                    if(i - values[i] >= 0)
                        values[i] += values[i - values[i]];
                    ans = max(ans, values[i]);
                    st.pop();
                }
                
                
            }
        }
        return ans;   
    }
};