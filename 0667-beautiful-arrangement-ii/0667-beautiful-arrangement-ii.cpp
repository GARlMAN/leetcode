class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> ans;
        int st = 1, ed = k + 1, i = 1;
        while(st <= ed){
            if(i % 2 == 1)
                ans.push_back(st++);
            else
                ans.push_back(ed--);
            i++;
        } 
        for(int j = k + 2; j <= n; ++j)
            ans.push_back(j);
        return ans;
    }
};