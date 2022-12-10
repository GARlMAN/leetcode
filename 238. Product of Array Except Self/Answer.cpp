class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int zero_count = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] == 0){     
                zero_count++;           
                continue;
                }
            else
                product *= nums[i];
                    }

        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] == 0 && zero_count == 1)
                nums[i] = product;
            else if(zero_count > 0){
                nums[i] = 0;
            }
            else{
                nums[i] = product/nums[i];
            }
                
        }
        return nums;
    }
};
