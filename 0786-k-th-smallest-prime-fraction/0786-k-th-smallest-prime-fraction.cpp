class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        

        priority_queue<pair<double, pair<int,int>>>pq;

        int n=arr.size();

        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++){
                pq.push({((double)arr[i]/arr[j]), {arr[i],arr[j]}});
                //this is to just keep element in queue equal to k
                if(pq.size()>k)
                    pq.pop();
            }
        }

        vector<int>ans;
        ans.push_back(pq.top().second.first);
        ans.push_back(pq.top().second.second);
        
        return ans;


    }
};