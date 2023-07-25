class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> hash;
        for(auto num : nums){
            if(hash[num] == 1)
                return true;
            hash[num] = 1;
        }
        return false;

    }
};