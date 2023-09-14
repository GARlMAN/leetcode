class Solution {
public:
    bool checkValidString(string s) {
        stack <pair<int, int>> st;
        int count = 0;
        for(auto ch : s){
            if(ch == '(')
                st.push({1, count});
            else if(ch == ')'){
                if(!st.empty())
                    st.pop();
                else if(count > 0)
                    count--;
                else 
                    return false;
                }
            else
                count++;
            
        }
        while(!st.empty()){
            if(count - st.top().second == 0)
                return false;
            st.pop();
                
            
            count--;
        }
        return true;
    }
};