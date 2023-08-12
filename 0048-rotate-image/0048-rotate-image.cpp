class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0; i < n/2; ++i){
            for(int j = i; j < n - i - 1; ++j){
                int temp = matrix[i][j];
                for(int k = 0; k < 4; ++k){
                    int t = matrix[j][n - 1 - i];
                    matrix[j][n - 1 - i] = temp;
                    temp = t;
                    int temp_i_2 = i;
                    i = j;
                    j = n - 1 - temp_i_2;
                }
            }
        }
    }
};