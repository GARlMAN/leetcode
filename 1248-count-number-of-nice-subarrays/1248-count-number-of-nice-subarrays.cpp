class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        vector<int> count;
        int ans = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] % 2 != 0)
                count.push_back(i);
        }
        int size = count.size();
//         if(count.size() - k <= 0)
            // return 0;
        for(int left = 0; left <= size - k; ++left){
            int start = (count[left] == 0|| left == 0) ? 0 : count[left - 1] + 1;
            int end = (count[left] == nums.size() - 1 || left == count.size() - k) ? nums.size() - 1 : count[left + k] - 1;
            
            
            int n = count[left] + 1 - start;
            int m = end - count[left + k - 1] + 1;
            int cal = n * m;
            cout << n << endl;
            ans += cal;
            
            
            
        }
        return ans;
    }
};