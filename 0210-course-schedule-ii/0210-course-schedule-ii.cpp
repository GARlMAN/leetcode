class Solution {
public:
    
    int hash[2001];
    int included[2001];
    vector<int> ans;
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        map<int, vector<int>> graph;
        //making the hash table for the graphs
        for(int i = 0; i < prerequisites.size(); ++i)
            graph[prerequisites[i][0]].push_back(prerequisites[i][1]);
        
        for(int i = 0; i < numCourses; ++i)
            if(!solve(i, graph))
                return {};
            
        return ans;
    }
    
    
    bool solve(int course, map<int, vector<int>> &graph){
        if(graph[course].size() == 0){
            if(included[course] == 0){
                ans.push_back(course);
                included[course] = 1;

            }
            return true;
        }

        if(hash[course])
            return false;
        
        //if there's a loop
        hash[course] = 1;
        
        for(auto val : graph[course])
            if(!solve(val, graph))
                return false;


        graph[course] = {};
        //removinb element
        
        ans.push_back(course);
        
        included[course] = 1;
        return true;
        
    }
};