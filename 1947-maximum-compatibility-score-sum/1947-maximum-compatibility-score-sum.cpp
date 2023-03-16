class Solution {
public:
    //check score between
    int checkscore(vector<vector<int>>& students, vector<vector<int>>& mentors, int index, int i){
        int ans = 0;
        for(int j = 0; j < students[index].size(); ++j){
            if(students[index][j] == mentors[i][j])
                ans++;
        }
        return ans;
    }
    
    
    //bool solve
    int solve(vector<vector<int>>& students, vector<vector<int>>& mentors, int index, int score, vector<bool>& takenMentor){
        if(index == students.size())
            return score;
        int ans = 0;
        for(int i = 0; i < mentors.size(); ++i){
            if(takenMentor[i] == true)
                continue;
            takenMentor[i] = true;
            int tempscore =  checkscore(students, mentors, index, i);
            int temp = solve(students, mentors, index + 1, score + tempscore, takenMentor);
            takenMentor[i] = false;
            ans = max(temp, ans);
        }
        return ans;
    }
    
    
    
    //maxcampatibility
    int maxCompatibilitySum(vector<vector<int>>& students, vector<vector<int>>& mentors) {
        
        int n = students.size();
        vector<bool> takenMentors(n, false);
        int index = 0;
        int score = 0;
        int ans = solve(students, mentors, 0, 0, takenMentors);
        return ans;
    }
};