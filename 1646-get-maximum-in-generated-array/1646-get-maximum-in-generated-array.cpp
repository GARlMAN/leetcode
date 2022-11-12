class Solution {
public:
    int getMaximumGenerated(int n) {
        int max = 0;
        if(n  < 2)
            return n;
        vector<int> a{0, 1};
        for(int i = 2; i < n + 1; ++i){
            int temp;
            if(i % 2 == 0){
                temp = a[i/2];
                a.push_back(temp);
            }
            else{
                temp = a[i/2] + a[i/2 + 1];
                a.push_back(temp);
            }
            if(max < temp)
                max = temp;
                
        }
        return max;
    }
};