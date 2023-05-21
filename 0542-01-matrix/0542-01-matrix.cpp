class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>> ans = mat;
        int maxValue = mat.size() - 1 + mat[0].size() - 1;
        for(int i = 0; i < mat.size(); ++i){
            for(int j = 0; j < mat[i].size(); ++j){
                if(mat[i][j] == 0)
                    ans[i][j] = 0;
                else{
                    int Top = i == 0 ? maxValue : ans[i - 1][j];
                    int Left = j == 0 ? maxValue : ans[i][j - 1];
                
                
                ans[i][j] = min(Top, Left) + 1;         
                }
            }
        }
        for(int i = ans.size() - 1; i >= 0; --i){
            for(int j = ans[0].size() - 1; j >= 0; --j){
                if(mat[i][j] == 0)
                    ans[i][j] = 0;
                else{
                    int Bottom = i == mat.size() - 1 ? maxValue : ans[i + 1][j];
                    int Right = j == mat[0].size() - 1? maxValue : ans[i][j + 1];
                    ans[i][j] = min(min(Bottom, Right) + 1, ans[i][j]);     
                    
                }
            }
        }
        
        return ans;}
};