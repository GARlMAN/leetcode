class MinStack {
public:
    vector<int> st;
    int minEl = INT_MAX;
    void push(int val) {
        minEl = min(minEl, val);
        st.push_back(val);
    }
    
    void pop() {
        int a = st[st.size() - 1]; 
        st.pop_back();
        
        if(a == minEl){
            minEl = INT_MAX;

            for(auto i : st)
                minEl = min(i, minEl);

        }
    }
    
    int top() {
        return st[st.size() - 1];
    }
    
    int getMin() {
        return minEl;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */