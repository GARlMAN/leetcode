class Solution {
public:
    int rotatedDigits(int n) {
        int count=0;
        for(int i=1;i<=n;i++){
            string s=to_string(i);
            bool flag=0;
            
            for(auto i:s){
                if(i=='3'|| i=='4' || i=='7'){
                    flag=0;
                    break;
                }
                if(i=='2'||i=='5'|| i=='6' || i=='9')
                    flag=1;
            }
            if(flag){
count++;        
           }
              
        }
        return count;
    }
};