class Solution {
public:
    vector<string> ans;
    vector<string> generateParenthesis(int n) {
        stack<char> st;
        solve("", 0, n);
        return ans;
    }
    
    void solve(string s, int m, int n){
        if(n == 0 && m == 0){
            ans.push_back(s);
            return;
        }

        if(n > 0)
            solve(s + '(', m + 1, n - 1);


        
       if(m != 0)
            solve(s + ')', m - 1, n);
    }
};