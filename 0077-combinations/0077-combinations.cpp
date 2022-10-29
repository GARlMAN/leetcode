class Solution {
public:
     vector<vector<int>> ans;
    vector<vector<int>> combine(int n, int k) {
        vector<int> a{};
        solve(n, k, a, 0, 1);
        return ans;
    }
    
    
    
    void solve(int n, int k, vector<int> a, int j, int l){
        if(j == k){
            ans.push_back(a);
            return;
        }
            
        for(int i = l; i <= n; ++i){
            a.push_back(i);
            solve(n, k, a, j+1, i+1);
            a.pop_back();
        }
    }
};