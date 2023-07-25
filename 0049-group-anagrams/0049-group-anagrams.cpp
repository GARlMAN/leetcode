class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map <string, vector<string>> hash;
        for(auto str : strs){
            string temp = str;
            sort(temp.begin(), temp.end());
            hash[temp].push_back(str);
            
        }
        vector<vector<string>> ans;
        for(auto i : hash)
            ans.push_back(i.second);
        
        return ans;
    }
};