class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        int ans = 0;
        while(right < nums.size()){
            ans = max(ans, right - left);
            if(nums[right] == 1)
                right++;
            else if(k == 0 && left == right){
                cout << "hi" << endl;
                    right++;
                    left++;
                
            }
            else{
                if(k > 0){
                    k--;
                    ans = max(ans, right - left);
                    right++;
                }   
                else{
                    while(left < right){
                        if(nums[left] == 0){
                            left++;
                            right++;
                            break;
                        }
                        else
                            left++;
                    }  

                }
            } 
        }
        ans = max(ans, right - left);
        return ans;
    }
};