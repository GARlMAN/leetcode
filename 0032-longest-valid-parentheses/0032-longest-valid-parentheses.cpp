class Solution {
public:
    int longestValidParentheses(string s) {

        stack<int> st;
        int ans = 0;
        int current = 0;
        vector<int> values(s.size() + 1, 0);
        for(int i = 0; i < s.size(); ++i){
            //pushing in stack if there's a open bracket
            if(s[i] == '(')
                st.push(1);
            else{
                if(!st.empty()){
                    //checking for i - 1 value for (()) case and checking for values that would connect other bracket whcih is values[i - values[i]]
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