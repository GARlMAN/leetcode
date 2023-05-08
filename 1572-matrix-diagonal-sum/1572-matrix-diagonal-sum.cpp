class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        //left to right 
        int ans = 0;
        int size = mat.size();
        for(int i = 0; i < size; ++i)
            ans += mat[i][i] + mat[size- i - 1][i];
        //remove the middle counted twice if mat size is odd
        if(size % 2 != 0)
            ans -= mat[(size - 1)/2][(size - 1)/2];
        return ans;
    }
};