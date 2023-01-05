class Solution {
public:
    int rob(vector<int>& nums) {
        int a1 = 0, a2 = 0;
        int temp;
        for(int i = 0; i < nums.size(); ++i){
            temp = max(a1 + nums[i], a2);
            a1 = a2;
            a2 = temp;
        }
        return temp;
    }
};
