class Solution {
public:
    map <pair <int, int>, int> dp;
    map <pair <int, int>, int> maxi;
    int mctFromLeafValues(vector<int>& arr) {
        for(int i = 0; i < arr.size(); ++i){
            maxi[{i, i}] = arr[i];
            for(int j = i + 1; j < arr.size(); ++j)
                maxi[{i, j}] = max(arr[j], maxi[{i, j - 1}]);
        }
        return solve(0, arr.size() - 1, arr);
        
    }
    int solve(int i, int j, vector<int>& arr){
        if(i >= j)
            return 0;
        int ans = INT_MAX;
        pair<int, int> p1;
        p1.first = i;
        p1.second = j;
        if(dp[p1])
            return dp[p1];
        for(int k = i; k < j; ++k){
            
             int temp = maxi[{i, k}] * maxi[{k + 1, j}] + solve(i, k, arr) + solve(k + 1, j, arr);
             ans = min(temp, ans);
        }
        dp[p1] = ans;
        return ans;
    }
};