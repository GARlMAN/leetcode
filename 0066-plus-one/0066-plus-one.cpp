class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        int carry = 0;
        int n = nums.size() - 1;
        for(int i = n; i >= 0; --i){
            int sum;
            if(i == n)
                sum = 1 + nums[i];
            else
                sum = carry + nums[i];
            carry = sum > 9 ? 1 : 0;
            sum = sum % 10;
            nums[i] = sum; 
            if(!carry)
                return nums;
        }
        if(carry == 1)
            nums.insert(nums.begin(), 1);
        
        return nums;
    }
};