class MinStack {
public:
    stack<int> s;
    stack<int> mins;

    MinStack()
    {    
    }
    
    void push(int val)
    {
        s.push(val);
        (!mins.empty() && mins.top() < val)?mins.push(mins.top()):mins.push(val);

    }
    
    void pop()
    {
        s.pop();
        mins.pop();
    }
    
    int top() 
    {
        return s.top();       
    }
    
    int getMin()
    {
        return mins.top();
    }
};
