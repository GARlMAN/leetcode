class Solution {
public:

    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top = 0;
        int right = matrix[0].size() - 1;
        while(right >= 0 && top < matrix.size()){
            if(matrix[top][right] == target)
                return true;
            if(matrix[top][right] < target)
                top++;
            else
                right--;
        }
        return false;
    }
};