class Solution {
public:
    int rob(vector<int>& nums) {
        int a1 = 0;
        int a2 = 0;
        int temp;
        for(auto num : nums){
            temp = max(num + a2, a1);
                a2 = a1;
                a1 = temp;
        }
        return temp;
    }
};