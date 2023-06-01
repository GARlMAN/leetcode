class Solution {
public:
    int n;
    map <pair<pair<int, int>, int>, int> dp;
    int m = 1000000000 + 7;
    int numTilings(int t) {
        n = t;
        return solve(0, 0, 1);
    }
    long long solve(int b1, int b2, int i){
        if(i == n)
            return b1 == b2 ? 1 : 0;
        long long  count = 0;
        if(dp[{{b1, b2}, i}])
            return dp[{{b1, b2}, i}];
        if(b1 == 1 && b2 == 1)
            count += solve(0, 0, i + 1) % m;
        else if(b1 == 0 && b2 == 0)
            count += solve(0, 0, i  + 1) % m + solve(1, 1, i + 1)%m  + solve(1, 0, i + 1)%m + solve(0, 1, i + 1)%m;
        else if(b1 == 1 && b2 == 0)
            count += solve(1, 1, i + 1)%m + solve(0, 1, i + 1)%m;
        else
            count += solve(1, 1, i + 1)%m + solve(1, 0, i + 1)%m;
        dp[{{b1, b2}, i}] = count%m;
        return count%m;
            
        
        
    }
};