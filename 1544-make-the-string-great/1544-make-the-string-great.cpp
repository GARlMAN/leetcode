class Solution {
public:
    string makeGood(string s) {
        stack <char> st;
        string ans = "";
        
        for(int i = 0; i < s.size(); ++i){
            
            if(!st.empty() && (st.top()+32 == s[i] || st.top() == s[i] + 32)){
                cout << s[i] << endl;
                st.pop();
            }
            else
                st.push(s[i]);
        }
        
        while(!st.empty()){
            char temp = st.top();
            st.pop();
            ans = temp+ans;
            
        }
        return ans;
    }
};