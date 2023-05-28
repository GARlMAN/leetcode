class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int ans = 0;
        int grow = 1;
        int shrink = 1;
        int temp = 0;
        for(int i = 1; i < arr.size(); ++i){
            if(arr[i] > arr[i - 1]){
                temp = 0;
                shrink = 1;
                grow++;
            }

            else if(arr[i] < arr[i - 1]){
                if(grow != 1)
                    temp = grow;
                grow = 1;
                ans = temp == 0 ? ans : max(ans, shrink + temp);
                shrink++;
            }
            else{
                grow = 1;
                shrink = 1;
                temp = 0;
            }
            
        }
        return ans;
    }
};