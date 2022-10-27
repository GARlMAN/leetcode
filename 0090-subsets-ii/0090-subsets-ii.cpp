class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> a;
        sort(nums.begin(), nums.end());
        ans.push_back(a);
        solve(nums, a , 0);
        return ans;
    }
    
    
    void solve(vector<int>& nums, vector<int> a, int j){
        if(j == nums.size())
            return;
            

        for(int i = j; i < nums.size(); ++i){
            a.push_back(nums[i]);
            if (std::find(ans.begin(), ans.end(),a)==ans.end())
                ans.push_back(a);
            solve(nums, a, i+1);
            a.pop_back();
            
        }
        
        
    }
};