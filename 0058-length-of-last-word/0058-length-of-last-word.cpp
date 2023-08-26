class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        int count = 0;
        for(auto ch : s){

            if(count != 0 && ch == ' ')
                ans = count, count = 0;
            else if(ch != ' ')
                count++, ans = count;
        }

        return max(count, ans);
    }
};