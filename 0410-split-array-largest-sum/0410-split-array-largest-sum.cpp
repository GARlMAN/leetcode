class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        //find the max and min value which is the left - right value of the binary serach
        int right = 0;
        int left = nums[0];
        for(auto num : nums){
            right += num;
            left = max(left, num);
        }
        int ans;
        //binary search algo which checks if values for a given mid is possible or not if it's not then it changes the value of mid 
        while(left <= right){
            int mid = (left + right)/2;
            if(check(nums, mid, k)){
                ans = mid;
                right = mid - 1;
            }
            else
                left = mid + 1;
        }
        return ans;
    }
    bool check(vector<int>& nums, int mid, int k){
        //this is to check how many sub-arrays can be formed with the mid value and see if it's greater than k
        int curr_sum = 0;
        int count = 1;
        for(auto num : nums){
            curr_sum += num;
            if(curr_sum > mid){
                count += 1;
                curr_sum = num;
            }
        }
        return count <= k;
    }
};