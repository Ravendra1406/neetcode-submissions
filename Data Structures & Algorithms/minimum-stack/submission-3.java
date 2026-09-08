class MinStack {
    Stack<Integer>st;
    Stack<Integer>mn;
    public MinStack() {
        st=new Stack<>();
        mn=new Stack<>();
    }
    
    public void push(int value) {
        st.push(value);
        if(mn.isEmpty() || mn.peek()>=value)
        mn.push(value);
    }
    
    public void pop() {
        if(st.isEmpty())
        return;
        int top = st.pop();
        if (top == mn.peek()) {
            mn.pop();
        }
    }
    
    public int top() {
        return st.peek();
    }
    
    public int getMin() {
        return mn.peek();
    }
}
