class Solution {
public:
    int minAddToMakeValid(string s) {
        int count = 0;
        stack <int> st;
        for(auto ch : s){
            if(ch == '(')
                st.push(1);
            else{
                if(!st.empty())
                    st.pop();
                else
                    count++;
            }
        }
        return count + st.size();
    }
};