class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> ans;
        for(int i = 0; i < matrix[0].size(); ++i){
            vector<int> a;
            for(int j = 0; j < matrix.size(); ++j)
                a.push_back(matrix[j][i]);
            ans.push_back(a);
        }
        return ans;
    }
};