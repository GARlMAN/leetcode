class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x = coordinates[1][0] - coordinates[0][0];
        int y = coordinates[1][1] - coordinates[0][1];
        for(auto coordinate : coordinates){
            if((coordinate[0] - coordinates[0][0]) * y != (coordinate[1] - coordinates[0][1]) * x)
                return false;
        }
        return true;
    }
};