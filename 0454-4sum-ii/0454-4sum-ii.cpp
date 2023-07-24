class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int count = 0;
        map<int, int> hash;
        int n = nums1.size();
        vector <int> a1;
        vector <int> a2;
        //making a combination of the first two vectors nums1 & nums2
        for(int i = 0; i  < n; ++i)
            for(int j = 0; j < n; ++j)
                a1.push_back(nums1[i] + nums2[j]), hash[nums3[i] + nums4[j]] += 1;;

        
        for(int i = 0; i  < a1.size(); ++i)
                if(hash[-a1[i]] != 0)
                    count += hash[-a1[i]] ;
        return count;
                
    }
};