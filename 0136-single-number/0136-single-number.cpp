class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int count =1;
        sort(nums.begin(), nums.end());
        for(int i= 1; i<nums.size();++i){
    if(nums[i]==nums[i-1])
       count++;
    else{
        if(count == 1)
            return nums[i-1];
        count = 1;
        
}
            
}
        return nums[nums.size()-1];
        
    }
};