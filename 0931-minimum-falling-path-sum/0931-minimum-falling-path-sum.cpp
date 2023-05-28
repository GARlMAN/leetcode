class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans = INT_MAX - 10000;
        int n = matrix.size() - 1;
        for(int i = 0; i <= n; ++i){
            for(int j = 0; j <= n; ++j){
                if(i != 0){
                  int a = j == 0 ? INT_MAX - 5000 : matrix[i - 1][j - 1];
                  int b =  matrix[i - 1][j];
                  int c = j == n ? INT_MAX - 5000 : matrix[i - 1][j + 1];
                  matrix[i][j] = min(a + matrix[i][j], min(b + matrix[i][j], c + matrix[i][j]));
                    
                }
                if(i == n)
                    ans = min(ans, matrix[i][j]);
            }
        
        
        }
        return ans;
    }
};