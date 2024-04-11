class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        stack<int> st;
        st.push(0);
        for(auto ch : s)
            if(ch == '(')
                st.push(st.top() + 1);
            else if(ch == ')')
                ans = max(ans, st.top()), st.pop();
        return ans;
    }
};