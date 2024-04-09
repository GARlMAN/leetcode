class Solution {
public:
    void bubbleSort(vector<int>& nums, int st){
    bool swapped;
    int n = nums.size();
   

    for (int i = st; i < n - 1; i++) {
        swapped = false;
        for (int j = st; j < n - i - 1 + st; j++) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
    }
    void nextPermutation(vector<int>& nums) {
        int st = -1, ed = 0;
        for(int i = 1; i < nums.size(); ++i){
            if(nums[i] > nums[i - 1])
                st = i - 1, ed = i;
            else if(st != -1 && nums[i] > nums[st] && nums[ed] > nums[i])
                ed = i;
        }
        //swaping
        if(st != -1)
            swap(nums[st], nums[ed]);
        bubbleSort(nums, st + 1);
    }
};