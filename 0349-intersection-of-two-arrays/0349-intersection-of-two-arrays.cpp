class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int, int> hash;
        for(auto num1 : nums1)
            hash[num1] = 1;
        for(auto num2 : nums2){
            if(hash[num2] != 0){
                ans.push_back(num2);
                hash[num2] = 0;
            }
        }
        
        
        return ans;
    }
};