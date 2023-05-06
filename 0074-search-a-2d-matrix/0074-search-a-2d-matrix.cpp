class Solution {
public:
    bool Binary(vector<int> &nums, int target){
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right){
            int mid = left + (right-left)/2;
            if(target == nums[mid])
                return true;
            else if(target >  nums[mid])
                left = mid + 1;
            else
                right = mid - 1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_len = matrix[0].size() - 1;
        int low = 0;
        int high = matrix.size() - 1;
        
        while(low <= high){
            
            int mid = low + (high-low)/2;
            
            if(matrix[mid][0] <= target && matrix[mid][row_len] >= target)
                return Binary(matrix[mid], target);
            else if(target > matrix[mid][row_len] )
                low = mid + 1;
            else if(target < matrix[mid][0])
                high = mid - 1;
            
            
        }

        
        
        return false;
    }
};