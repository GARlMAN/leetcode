class RLEIterator {
public:
    int index = 0;
    int count = 0;
    vector<int> arr;
    RLEIterator(vector<int>& encoding) {
        arr = encoding;
    }
    
    int next(int n) {
        while(index < arr.size()){
            if(n <= arr[index]){
                arr[index] -= n;
                return arr[index + 1]; 
            }
            else
                n -= arr[index];
            index += 2;
        }
            
            
        return -1;
    }
};

/**
 * Your RLEIterator object will be instantiated and called as such:
 * RLEIterator* obj = new RLEIterator(encoding);
 * int param_1 = obj->next(n);
 */