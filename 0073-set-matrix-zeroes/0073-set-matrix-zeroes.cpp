class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<pair<int,int>> v;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                    v.insert({i,j});
            }
        }
        for(auto i:v)
        {
            for(int k=0;k<matrix[0].size();k++)
            {
                matrix[i.first][k]=0;
            }
            for(int k=0;k<matrix.size();k++)
            {
                matrix[k][i.second]=0;
            }
        }
    }
};