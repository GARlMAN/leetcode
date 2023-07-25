class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash[30] = {0};
        int count = 0;
        for(char a : s){
            hash[a - 'a'] += 1;
            if(hash[a - 'a'] == 1)
                count++;
        }

        for(char a : t){
            hash[a - 'a'] -= 1;  
            if(hash[a - 'a'] < 0)
                return false;
            if(hash[a- 'a'] == 0)
                count--;
        }
        return count == 0;

    }
};