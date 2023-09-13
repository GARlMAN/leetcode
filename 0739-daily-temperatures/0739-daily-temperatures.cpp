class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> st;
        vector<int> ans(temperatures.size(), 0);
        for(int i = 0; i < temperatures.size(); ++i){
            while(!st.empty() && (st.top()).first < temperatures[i]){
                pair<int, int> temp = st.top();
                ans[temp.second] = i - temp.second;
                st.pop();
            }
            st.push({temperatures[i], i});
        }
        return ans;
    }
};