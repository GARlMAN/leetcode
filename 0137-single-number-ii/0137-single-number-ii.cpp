class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size(); i = i+3){
            
            if(i != nums.size() - 1 && nums[i] != nums[i+1] &&nums[i] != nums[i+2])
                return nums[i];
            else if(i == nums.size()-1)
                return nums[i];
            
        }
        return -1;
    }
};