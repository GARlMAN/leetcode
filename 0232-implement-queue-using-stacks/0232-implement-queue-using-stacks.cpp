class MyQueue {
public:
    stack<int> in_st;
    stack<int> out_st;
    
    void push(int x) {
        in_st.push(x);
    }
    
    int pop() {
        peek();
        int val = out_st.top();
        out_st.pop();
        return val;
    }
    
    int peek() {
            if (out_st.empty())
            while (!in_st.empty())
                out_st.push(in_st.top()), in_st.pop();
            return out_st.top();
        }
    
    bool empty() {
        if(in_st.empty() && out_st.empty())
            return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */