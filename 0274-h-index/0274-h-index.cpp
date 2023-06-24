class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int n = citations.size() - 1;
        int count = 1;
        int ans = 0;
        for(int i = n; i >= 0; --i){
            if(citations[i] >= count)
                count++, ans++;
        }
        return ans;
    }
};