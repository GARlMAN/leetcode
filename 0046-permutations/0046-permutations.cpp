class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> a;
        vector<int> hash(7, 0);
        solve(nums, a, hash, 0);
        return ans;
    }
    
    void solve(vector<int>& nums, vector<int> a, vector<int> hash, int k){
        if(k == nums.size()){
            ans.push_back(a);
            return;
        }
        for(int i = 0; i < nums.size(); ++i){
            if(hash[i] == 0){
                hash[i] = 1;
                a.push_back(nums[i]);
                solve(nums, a, hash, k + 1);
                hash[i] = 0;
                a.pop_back();
            }
        }
    }
    
    
};