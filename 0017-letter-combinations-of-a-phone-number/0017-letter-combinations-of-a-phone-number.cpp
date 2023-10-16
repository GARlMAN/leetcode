class Solution {
public:
    const vector<string> pad = {
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"
    };
    vector<string> ans;
    vector<string> letterCombinations(string digits) {
        solve(digits, 0, "");
        return ans;
    }
    void solve(string digits, int k, string temp){
        if(k == digits.size()){
            if(temp != "")
                ans.push_back(temp);
            return;
        }
        //going to the right output
        int num = digits[k] - '0';
        for(int i = 0; i < pad[num].size(); ++i)
            solve(digits, k + 1, temp + pad[num][i]);
    }
};