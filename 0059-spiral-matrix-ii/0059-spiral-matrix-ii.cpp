class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>  ans;
        for(int i = 0; i < n; ++i){
            vector <int> a(n, -1);
            ans.push_back(a);
        }
            
        int top = 0;
        int bottom = n;
        int left = 0;
        int right = n;
        int count = 1;
        while(left < right && top < bottom){

                
            //left to right
            for(int i = left; i < right; ++i){
                ans[top][i] = count;
                count++;
                
            }
            top++;

            //top to bottom
            for(int i = top; i < bottom; ++i){
                ans[i][right - 1] = count;
                count++;
            }
                
            right--;

            if(count + 1 == n * n)
                return ans;
            
            
            //left to right
            for(int i = right - 1; i > left - 1; --i){
                ans[bottom - 1][i] = count; 
                count++;
            }
                
            bottom--;
            for(int i = bottom - 1; i > top - 1; --i){
                ans[i][left] = count;
                count++;
            }
            
            left++;
            
            
        }
        return ans;
    }   

};