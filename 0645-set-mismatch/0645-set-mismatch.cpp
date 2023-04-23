class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        //answer array
        vector<int> ans;
        //making all the values that have been visite as -ve
        for(int i = 0; i < nums.size(); ++i){
        //checking if it's been visited or not if it has been then appending it to the ans (checking for doubles)
            if(nums[abs(nums[i]) - 1] > 0)
                nums[abs(nums[i])- 1] = -nums[abs(nums[i]) - 1];
            else
                ans.push_back(abs(nums[i]));
        }
        //checking which one has not been visited
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] > 0)
                ans.push_back(i + 1);
        }
        return ans;
        
    }
};