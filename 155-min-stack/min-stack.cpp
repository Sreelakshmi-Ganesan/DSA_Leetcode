class MinStack { 
    private : 
    stack<int> mainst;
      stack<int> minst;  

public:
    MinStack() {
      
    }
    void push(int val) {
        mainst.push(val);
        if(minst.empty() || val< minst.top())
        minst.push(val);
        else minst.push(minst.top());
    }
    
    void pop() {
        if(!mainst.empty())
        {
            mainst.pop();
            minst.pop();
        }
        
    }
    
    int top() {
       
        return mainst.top();
    }
    
    int getMin() {
    
        return minst.top();
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