class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> c;
        set<int> r;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0){
                    c.insert(i);
                    r.insert(j);
                }
            }
        }
        for(auto i:c)
        {
            for(int k=0;k<matrix[0].size();k++)
            {
                matrix[i][k]=0;
            }

        }
        for(auto i:r)
        {
            for(int k=0;k<matrix.size();k++)
            {
                matrix[k][i]=0;
            }

        }
    }
};