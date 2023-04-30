class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>  ans;
        int top = 0;
        int bottom = matrix.size();
        int left = 0;
        int right = matrix[0].size() ;

        while(left < right && top < bottom){

                
            //left to right
            for(int i = left; i < right; ++i)
                ans.push_back(matrix[top][i]);
            top++;

            //top to bottom
            for(int i = top; i < bottom; ++i)
                ans.push_back(matrix[i][right - 1]);
            right--;
            
            if(ans.size() == matrix[0].size() * matrix.size())
                return ans;
            
            
            //left to right
            for(int i = right - 1; i > left - 1; --i)
                ans.push_back(matrix[bottom - 1][i]);
            bottom--;
            for(int i = bottom - 1; i > top - 1; --i)
                ans.push_back(matrix[i][left]);
            
            left++;
            
            
        }
        return ans;
    }
};