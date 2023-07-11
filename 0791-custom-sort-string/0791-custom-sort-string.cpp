class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> hash(30, 0);
        vector<string> sort(30, "");

        for(int i = 0; i < order.size(); ++i)
            hash[order[i] - 'a'] = i + 1;
        
        for(auto ch : s){
            int postion = hash[ch - 'a'] == 0 ? 29 : hash[ch - 'a'] ;
            sort[postion] += ch;
        }
        string ans = "";
        for(auto st : sort)
            ans += st;
            
        return ans;
    }
};