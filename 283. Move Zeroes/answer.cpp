class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int j = 0;
        int i = 0;
        while(j < nums.size() && i < nums.size()){
            if(nums[j] == 0)
                j++;
            else if(nums[i] == 0){
                if(i < j){
                    nums[i] = nums[j];
                    nums[j] = 0; 
                    i++;
                    j++;
                }
                else{
                    j++;
                }
            }
            else
                i++;
        }
    }
};
