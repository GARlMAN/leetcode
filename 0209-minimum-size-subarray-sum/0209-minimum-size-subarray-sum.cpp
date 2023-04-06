class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       
        int n = nums.size();
        int ans = INT_MAX;
        int i=0,j=0;
        int sum=0;
        while(i<n){
            //if sum is less than target then continue adding it.
            sum+=nums[i];
            //if sum is >= target then as we have to find the minimum length subarray so we will check if by
            //incrementing j,can we get required target and update ans.
            //here ans = min(ans,(i-j+2)) bcoz by incremneting j if sum<target then we will not be able to achieve
            //our requiered target so we need to include prev value also,so we (i-j+1)+1.
            while(sum>=target){
                sum-=nums[j];
                j++;
                ans=min(ans,(i-j+2));
            }
            i++;
        }
        return (ans!=INT_MAX)?ans:0;
    }
};