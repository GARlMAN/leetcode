class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int a = 0;
        int ans = 0;
        for(auto i : gain){
            a += i;
            ans = max(ans, a);
            
        }
        return ans;
    }
};