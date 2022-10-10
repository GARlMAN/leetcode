class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int count = 0;
        sort(nums.begin(), nums.end());
        int max = 0;
        int ans = -1;
        for(int i = 0; i < nums.size(); ++i){
            if(i != 0 && nums[i] == nums[i-1]  && nums[i] % 2 == 0)
                count ++;
            if(i == 0 && nums[i] % 2 == 0)
                count = 1;

            if((i != 0 && nums[i] != nums[i - 1])){
                if(count > max){
                    max = count;
                    ans = i - 1;
                   
                }
                 count = nums[i] % 2 == 0 ? 1 : 0;
            }
            if(i == nums.size() - 1){
                if(count > max){
                    max = count;
                    ans = i;
                   
                }
            }
                        cout << count<< " " << nums[i] << endl;
                 
        }
        if(ans == -1)
            return -1;
        return nums[ans];
    }
};