class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int *hash = new int[nums.size() + 1];
        vector<int> a;
        solve(nums, a, hash, 0);
        return ans;
    }
    
    void solve(vector<int>& nums, vector<int> a, int hash[], int j){
        if( j == nums.size()){
            if (std::find(ans.begin(), ans.end(),a)==ans.end())
                 ans.push_back(a);
          return;
 }
        for(int i = 0; i < nums.size(); ++i){
            if(hash[i] == 1)
                continue;
            a.push_back(nums[i]);
            hash[i] = 1;
            solve(nums, a, hash, j + 1);
            a.pop_back();
            hash[i] = 0;
            
        }
    }
};