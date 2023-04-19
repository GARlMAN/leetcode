class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int, int> hash;
        map<int, int> hash_index;
        int max_val = INT_MIN;
        for(int i = 0; i < nums.size(); ++i){
            int num = nums[i];
            if(hash[num] == 0){
                hash[num] = 1;  
                hash_index[num] = i;
            }
            
            else
                hash[num] += 1;
            max_val = max(max_val, hash[num]);
        }
        int ans = INT_MAX;
        for(auto i : hash){
            int count = i.second;
            int index = hash_index[i.first];
            int temp = 0;
            if(i.second == max_val){
                cout << i.first << endl;
                while(count != 0){
                    if(i.first == nums[index])
                        count--;
                    temp++;
                    index++;
                }
                ans = min(ans, temp);
            }
        }
        return ans;
    }
};