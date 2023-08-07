class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count = 0;
        int mult = 1;
        vector<int> ans;
        for(int num : nums)
            if(num == 0)
                count++;
            else
                mult *= num;
        for(int num : nums)
            if(num == 0 && count == 1)
                ans.push_back(mult);
            else if(count >= 1)
                ans.push_back(0);
            else
                ans.push_back(mult / num);
            
        return ans;
    }
};