class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash;

        //adding numbers to hte hash
        for(auto num : nums)
            hash[num] += 1;
        int start = 0;
        int end = INT_MAX;
        for(int i = 0; i < nums.size(); ++i){
            hash[nums[i]]--;
            if(end == nums[i])
                return {start, i};
            if(end == INT_MAX && hash[target - nums[i]] > 0){
                    start = i;
                    end = target - nums[i];
                
            }
            cout << end << " ";


            
        }
        return {};
    }
};