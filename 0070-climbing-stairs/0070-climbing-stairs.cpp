class Solution {
public:
    int climbStairs(int n) {
        int b = 0;
        int a = 1;
        int temp  = 0;
        for(int i = 0; i<n;++i){
           temp = a + b;
           b= a;
           a = temp;
}
        return temp;
    }
};