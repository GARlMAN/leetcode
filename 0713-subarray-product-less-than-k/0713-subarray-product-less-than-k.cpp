class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int product = 1, count = 0, ans = 0, start = 0;

        
        //checking solution using two pointers my maintaint a count varaiable
        //has a start that increments when the product exceeds k
        for(int i = 0; i < nums.size(); ++i){
            product *= nums[i];
            count++;
            if(product < k)
                ans += count;
            else{
                while(product >= k && start < i){
                    product = product/nums[start];
                    start++;
                    count--;
                } 
                if(product < k)
                    ans += count;                  
            }
            
            
        }
         return ans;
    }
};