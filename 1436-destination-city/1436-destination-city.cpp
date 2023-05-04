class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string, int> hash;
        for(auto path : paths){
            if(!hash[path[1]])
                hash[path[1]] = 4;
            else
                hash[path[1]] -= 1;

            if(!hash[path[0]])
                hash[path[0]] = 3;
            
            else
                hash[path[0]] -= 1;
            
        }
        string ans;
        for(auto path : hash){
            if(path.second == 4)
                ans = path.first;
            
        }
        return ans;
    }
};