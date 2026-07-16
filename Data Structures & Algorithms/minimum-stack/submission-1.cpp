class MinStack {
public:
    MinStack() {}
    stack<int>st;
    stack<int>temp;
    
    void push(int val) {
        st.push(val);
        if(temp.empty() || temp.top()>=val) temp.push(val);
        
    }
    
    void pop() {
        int n=st.top();
        if(!st.empty()) st.pop();
        if(!temp.empty() && n==temp.top()) temp.pop();

    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return temp.top();
    }
};
