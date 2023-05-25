class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int start = 0;
        int count_odd = 0;
        int count = 1;
        int ans = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] % 2 != 0)
                count_odd++;
            if(count_odd > k){
                count = 1;
                start++;
                count_odd--;
            }
            if(count_odd == k){

                while(nums[start]%2 == 0){
                    
                    start++;
                    count++;
                }

                ans += count;
                
            }
                
        }
        return ans;
    }
};