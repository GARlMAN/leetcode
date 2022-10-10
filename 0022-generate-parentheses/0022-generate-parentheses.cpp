class Solution {
public:
    vector<string> ans;
    vector<string> generateParenthesis(int n) {
        string a = "";
        int m = 0;
        solve(a, n , m);
        return ans;
    }
    void solve(string a, int n, int m){
        if(n == 0 && m == 0){
            ans.push_back(a);
            return;
        }
        
        if(m > 0)
            solve(a+")", n, m - 1);
        if(n > 0)
            solve(a+"(", n-1, m + 1);
    }
};