class Solution {
public:
    int numTeams(vector<int>& rating) {
        vector <int> left(rating.size(), 0);
        vector <int> right(rating.size(), 0);
        int ans = 0;
        for(int i = 0; i < rating.size(); ++i){
            int c_left = 0;
            int c_right = 0;
            for(int j = 0; j < rating.size(); ++j){
                if(rating[i] > rating[j]){
                    if(i > j)
                        c_left++;
                    else
                        c_right++;
                }
            }
            left[i] = c_left;
            right[i] = c_right;
        }
        
        for(int i = 1; i < rating.size(); ++i){
            for(int j = 0; j < i; ++j){
                if(rating[i] > rating[j])
                    ans += left[j];      
                else if(rating[i] < rating[j])
                    ans += right[i]; 
                }
     
                
        }
 
        return ans;
    }
};