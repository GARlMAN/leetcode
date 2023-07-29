class Solution {
public:
    vector<string> ans;
    vector<string> generateParenthesis(int n) {
        stack<char> st;
        solve("", st, n);
        return ans;
    }
    
    void solve(string s, stack<char> st, int n){
        if(n == 0 && st.empty()){
            ans.push_back(s);
            return;
        }

        if(n > 0){
            st.push('(');
            solve(s + '(', st, n - 1);
            st.pop();
        }

        
       if(!st.empty()){
            st.pop();
            solve(s + ')', st, n);
        }
    }
};