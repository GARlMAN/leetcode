class Solution {
public:
    int totalMoney(int n) {
        int k = 0, s = 0;
        int ans = 0;
        for(int i = 0; i < n; ++i){
            if(i % 7 == 0)
                k++, s = k;
            else
                s++;
            ans += s;
        }
        return ans;
    }
};