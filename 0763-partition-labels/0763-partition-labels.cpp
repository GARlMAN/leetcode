class Solution {
public:
    vector<int> partitionLabels(string s) {
        int hash[30] = {0};
        vector<int> ans;
        //hasing all vlues
        for(auto ch : s)
            hash[ch - 'a'] += 1;
        
        int i = 0;
        //interating through all values
        while(i < s.size()){
            //new hash map to see if an element has been used before or not
            int arr[30] = {0}; 
            int count = 0;
            string temp = "";
            do{
                temp += s[i];
                //if it's a new element adding count
                if(0 == arr[s[i] - 'a']++)
                    count++;
                //if all types have been used decrementing count
                if(0 == --hash[s[i] - 'a'])
                    count--;
                i++;    
            }while(count > 0); //this for the final condition when the value of uiqueu elements is zero
            ans.push_back(temp.size());
        }
        //returning the answer
        return ans;
        
    }
};