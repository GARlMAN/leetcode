class Solution {
public:
    vector<int> diffWaysToCompute(string s) {
        vector <int> ans;
        for(int exp = 0; exp < s.size(); ++exp){
            vector <int> a;
            if(s[exp] == '+' || s[exp] == '-' || s[exp] == '*'){
                    vector<int> left = diffWaysToCompute(s.substr(0, exp));
                    vector<int> right = diffWaysToCompute(s.substr(exp + 1));
                    for(int i = 0; i < left.size(); ++i){
                        for(int j = 0; j < right.size(); ++j){
                            if(s[exp] == '+')
                                ans.push_back(left[i] + right[j]);
                            else if(s[exp] == '-')
                                ans.push_back(left[i] - right[j]);
                            else if(s[exp] == '*')
                                ans.push_back(left[i] * right[j]);
                        }
                    }
            }
        }
        if(ans.size() == 0)
            ans.push_back(stoi(s));
    

        return ans;
    }
};