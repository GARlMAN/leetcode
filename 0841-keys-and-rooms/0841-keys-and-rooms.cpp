class Solution {
public:
    int hash[1001] = {};
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int count = rooms.size();
        solve(0, rooms, count);
        return count == 0;
    }
    void solve(int n, vector<vector<int>>& rooms, int &count){
        hash[n] = 1;
        count--;
        for(auto room : rooms[n])
            if(hash[room] == 0)
                solve(room, rooms, count);
            
    }
};