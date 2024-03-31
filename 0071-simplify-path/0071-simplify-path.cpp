class Solution {
public:
    string simplifyPath(string path) {
        path = path + "/";
        stack<string> st;
        string ans = "";
        string current = "";
        
        for(auto ch : path){
            if(ch == '/'){
                if(current == ".." && !st.empty())
                    st.pop();
                else if(current == ".")
                    ;
                else if(current != "" && current != "..")
                    st.push(current);
                current = "";
            }
            else
                current += ch;
        }
        while(!st.empty()){
            ans =  "/" + st.top() + ans;
            st.pop();
        }
        return ans == "" ? "/" : ans;
    }
};