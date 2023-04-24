class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int, int> hash;
        vector<int> ans;
        for(int i = 0; i < nums2.size(); ++i)
            hash[nums2[i]] = i;
        
        for(int i = 0; i < nums1.size(); ++i){
            int j = hash[nums1[i]];
            int size = ans.size();
            while(j < nums2.size()){
                if(nums2[j] > nums1[i]){
                    ans.push_back(nums2[j]);
                        break;                    
                }
                j++;
            }
            if(size == ans.size())
                ans.push_back(-1);
        }
        return ans;
    }
};