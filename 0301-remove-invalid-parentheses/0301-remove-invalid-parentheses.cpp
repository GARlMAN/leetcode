class Solution {
public:
    vector<string> ans;
    vector<string> removeInvalidParentheses(string s) {
        
        int open = 0, close = 0;
        for(auto i : s){
            if(i == '(')
                open++;
            else if(close < open && i == ')')
                close++;
        }
        
        recursive(s, min(open, close), min(open, close), 0, "");
        return ans;
    }
    
    
    void recursive(string s, int open, int close, int k, string temp){
        if(open > close)
            return;


        for(int i = k; i < s.size(); ++i){
            if(s[i] == '(')
                recursive(s, open - 1, close, i + 1, temp + s[i]);
            else if(s[i] == ')')
                recursive(s, open, close - 1, i + 1, temp + s[i]);
            else
                temp += s[i]; 
        }
        if(open == 0 && close == 0){
            if(check(temp))
                ans.push_back(temp);
            return;
        }

    }
    
    bool check(string temp){
        for(auto i : ans)
            if(i == temp)
                return false;
        return true;
    }
};