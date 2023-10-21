class Solution {
public:
    bool check(string *hash, string temp){
        for(int i = 0; i < 30; ++i)
            if(temp == hash[i])
                return false;
            
        return true;
        
    }
    bool wordPattern(string pattern, string s) {
        s += " ";
        string temp = "";
        string hash[30] = {""};
        int j = 0;
        for(int i = 0; i < s.size(); ++i){
            if(j >= pattern.size())
                return false;
            if(s[i] == ' '){
                if(hash[pattern[j] - 'a'] == "" && check(hash, temp))
                    hash[pattern[j] - 'a'] = temp;
                else if(hash[pattern[j] - 'a'] != temp)
                    return false;
                temp = "";
                j++;
            }
            else
                temp += s[i];
        }
        return j == pattern.size();
    }
};