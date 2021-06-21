class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> stVector;
    vector<int> minVector;
    
    MinStack() {
        minVector.push_back(INT_MAX);
    }
    
    void push(int val) {
        stVector.push_back(val);
        if(val<minVector.back())
            minVector.push_back(val);
        else
            minVector.push_back(minVector.back());
        
    }
    
    void pop() {
        minVector.pop_back();
        stVector.pop_back();
        
    }
    
    int top() {
        return stVector.back();
        
    }
    
    int getMin() {
        return minVector.back();
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