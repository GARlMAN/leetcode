class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        int n = height.size() - 1;
        vector<int> left(n + 1, 0);
        vector<int> right(n + 1, 0);
        
        //calculate left max
        for(int i = 1, j = n - 1; i <= n; ++i, j--){
            
            left[i] = max(height[i - 1], left[i - 1]);
            right[j] = max(height[j + 1], right[j + 1]);

        }
        // cout << left[3] << " " << height[n] << endl;

        for(int i = 0; i <= n; ++i){
            int a = min(left[i], right[i]) - height[i];
            // cout << a << endl;
            ans += a > 0 ? a : 0;
        }
        
        
        
        
        return ans;
        
    }
};