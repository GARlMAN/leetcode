class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> hash;
        int ans = -1;
        for(auto val : s)
            hash[val] += 1;            
        
        for(int i = 0; i < s.size(); ++i)
            if(hash[s[i]] == 1)
                return i;
        
            
        return -1;
    }
};