class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int product = 1, count = 0, ans = 0, start = 0;

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
};;