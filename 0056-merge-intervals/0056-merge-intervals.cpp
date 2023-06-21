class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        int j = 0;
        while(j < intervals.size()){
            vector<int> a = intervals[j];
            j++;
            while(j < intervals.size() && a[1] >= intervals[j][0])
                a[1] = max(intervals[j][1], a[1]), j++;
            ans.push_back(a);
            
        }
        return ans;
    }
};