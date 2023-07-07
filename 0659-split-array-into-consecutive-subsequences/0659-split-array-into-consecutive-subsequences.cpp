class Solution {
public:
    bool isPossible(vector<int>& nums) {
        int n = nums.size() - 1;
        unordered_map<int, int> left, last;
        for(auto num : nums)
            left[num]++;
        
        for(auto num : nums){
            if(left[num] == 0)
                continue;
            left[num]--;
            if(last[num - 1] > 0){
                last[num - 1]--;
                last[num]++;
            }
            else if(left[num + 1] > 0 && left[num + 2] > 0){
                left[num + 1]--;
                left[num + 2]--;
                last[num + 2]++;
            }
            else
                return false;
        }
        return true;
    }
};