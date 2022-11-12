class Solution {
public:
    long long tribonacci(int n) {
        queue<long long> qu;
        long long sum = 2;
        qu.push(0);
        qu.push(1);
        qu.push(1);
        if(n == 0)
            return 0;
        if(n < 3)
            return 1;
        
        for(int i = 3; i < n; ++i){
            qu.push(sum);
            long long a = qu.front();
            cout << a << endl;
            sum = sum - a + sum;

            qu.pop();
            
        }
        return sum;
    }
};