class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int top = grid.size() - 1;
        int count = 0;
        while(top >= 0){
            int right = grid[0].size() - 1;
            if(grid[top][right] >= 0)
                return count;
            while(right >= 0 && grid[top][right] < 0){

                count++;
                right--;
            }
            top--;
        }
        return count;
    }
};