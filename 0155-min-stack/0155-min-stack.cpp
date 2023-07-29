class MinStack {
public:
    vector <int> st1;
    vector <int> st2;
    
    void push(int val) {
        st1.push_back(val);
        if(st2.size() == 0 || st2[st2.size() - 1] >= val )
            st2.push_back(val);
    }
    
    void pop() {
        int a = st1[st1.size() - 1];
        if(a == st2[st2.size() - 1])
            st2.pop_back();
        st1.pop_back();
    }
    
    int top() {
        return st1[st1.size() - 1];
    }
    
    int getMin() {
        return st2[st2.size() - 1];
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