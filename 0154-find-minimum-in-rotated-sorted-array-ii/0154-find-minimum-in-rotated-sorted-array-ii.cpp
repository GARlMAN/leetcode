class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo = 0, hi = nums.size() - 1;
        int ans = INT_MAX;
        //same solution using binary search
        while(lo <= hi){
            int mid = (lo + hi)/2;
            ans = min(ans, nums[mid]);
            
            if(nums[mid] < nums[hi])
                hi = mid - 1;
            else if(nums[mid] > nums[hi])
                lo = mid + 1;
            else
                hi--;
        }
        
        return ans;
    }
};