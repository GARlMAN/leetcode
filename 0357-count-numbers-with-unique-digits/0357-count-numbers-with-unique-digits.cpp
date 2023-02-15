class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int s = 0;
        if(n == 0)
            return 1;
        for(int i = 1;i <= n; ++i){
            if(i == 1){
                s += 10;
            }
            else{
                int a = 1;
                for(int j = 0; j < i; ++j){
                    if(j == 0)
                        a = a * 9;
                    else
                        a = a * (10 - j);
                        
                }
                s +=a;
            }
        }
        
        
        return s;
    }
};