class MinStack {
public:
        stack<int>st;
        stack<int>mn;
    MinStack() {

    }
    
    void push(int value) {
        st.push(value);
        if(mn.empty() || mn.top()>=value)
        mn.push(value);
    }
    
    void pop() {
        if(st.top()==mn.top())
        mn.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
       return mn.top();
    }
    
};
