class Solution {
public:
    vector<int> arr;

    Solution() : arr(10001, -1) {}

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int> repeat(graph.size(), 0);
        vector<int> ans;
        for(int i = 0; i < graph.size(); ++i){
            int a = solve(graph, i, repeat);
                if(a == 1)
                    ans.push_back(i);
        }
        return ans;
    }
    int solve(vector<vector<int>>& graph, int n,  vector<int> repeat){
        int ans = 1;
        if(arr[n] != -1)
            return arr[n];
        if(repeat[n] == 1)
            return arr[n] = 0;
        repeat[n] = 1;
        for(auto val : graph[n])
            if(solve(graph, val, repeat) == 0)
                return arr[n] = 0;
        
        return arr[n] = ans;
    }
};