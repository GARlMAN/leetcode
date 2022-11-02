class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int num = nums[0];
        bool dublicate = false;
        int j = 1;
        for(int i = 1; i < nums.size(); ++i)
{            if(num == nums[i]){                
                if(!dublicate){ 
                    nums[j] = nums[i];
                    dublicate = true;
                    j++;}
                
                }
            
        else
{            num = nums[i];
            dublicate = false;
            cout << nums[j] << " " << nums[i] << endl;
            nums[j] = nums[i];
            j++;}
}
        
        cout << j;
        return j;
            
        }

};