class Solution {
public:
    
    int hash[2001];
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        map<int, vector<int>> graph;
        //making the hash table for the graphs
        for(int i = 0; i < prerequisites.size(); ++i)
            graph[prerequisites[i][0]].push_back(prerequisites[i][1]);
        
        for(int i = 0; i < numCourses; ++i)
            if(!solve(i, graph))
                return false;
            
        return true;
    }
    
    
    bool solve(int course, map<int, vector<int>> &graph){
        if(hash[course])
            return false;
        if(graph[course].size() == 0)
            return true;
        //if there's a loop
        
        hash[course] = 1;
        
        //checking all the values
        bool ans = true;
        for(auto val : graph[course]){
            bool temp = solve(val, graph);

            //this is the weird one
            if(temp)
                graph[course].erase(std::remove(graph[course].begin(), graph[course].end(), val), graph[course].end());
            //min one
            else
                return false;
        }
            
        hash[course] = 0;
        //removinb element
        return true;
        
    }
};