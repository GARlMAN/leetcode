class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int ans = 1;
        int count_1 = 1;
        int count_2 = 1;
        for(int i = 0; i < arr.size() - 1; ++i){
            ans = max(max(count_2, count_1), ans);
            
            if(i % 2 == 0){
                count_1 = arr[i] < arr[i + 1] ? count_1 + 1 : 1;
                count_2 = arr[i] > arr[i + 1] ? count_2 + 1 : 1;
                
            }

            else{
                count_1 = arr[i] > arr[i + 1] ? count_1 + 1 : 1;
                count_2 = arr[i] < arr[i + 1] ? count_2 + 1 : 1;
                
            }

            ans = max(max(count_2, count_1), ans);
        }
        return ans;
    }
};