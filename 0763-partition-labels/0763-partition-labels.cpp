class Solution {
public:
    vector<int> partitionLabels(string s) {
        int hash[30] = {0};
        vector<int> ans;
        
        for(auto ch : s)
            hash[ch - 'a'] += 1;
        
        int i = 0;
        while(i < s.size()){
            int arr[30] = {0}; 
            int count = 0;
            string temp = "";
            do{
                temp += s[i];
                if(0 == arr[s[i] - 'a']++)
                    count++;
                if(0 == --hash[s[i] - 'a'])
                    count--;
                i++;    
            }while(count > 0);
            ans.push_back(temp.size());
        }
        return ans;
        
    }
};