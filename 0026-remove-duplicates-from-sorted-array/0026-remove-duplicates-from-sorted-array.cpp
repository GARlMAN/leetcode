class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i = 1, j = 0;
        int count = 0;
        while(i < nums.size()){
            if(nums[i] == nums[i-1]){
                i++;
                count++;
            }
            else if(nums[i] != nums[i-1]){
                
                nums[i- count] = nums[i];
                i++; }
            
        }
      
        return nums.size() - count;
    }
};