class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> a(n, 1);
        
        for(int i = 1; i < n; i++)
            if(ratings[i] > ratings[i - 1])
                a[i] = a[i - 1] + 1;
        
        for(int i = n - 1; i > 0; i--)
            if(ratings[i] < ratings[i - 1])
                a[i- 1] = max(a[i] + 1, a[i -1]);
        
        int result = 0;
        for(auto i : a)
            result += i;
        return result;
        
    }
};