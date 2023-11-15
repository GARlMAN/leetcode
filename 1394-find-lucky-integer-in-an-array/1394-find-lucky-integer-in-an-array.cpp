class Solution {
public:
    int findLucky(vector<int>& arr) {
        int nums[501] = {0};
        for(auto num : arr)
            nums[num]++;
        
        for(int i = 500; i >= 1; --i)
            if(i == nums[i])
                return i;
        return -1;
    }
};