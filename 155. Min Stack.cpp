class MinStack {
    stack<int> st;
    stack<int> minStack;
public:
    MinStack(){} //constructor calling
    

    void push(int val) {
        st.push(val);

        // push only if minStack is empty or valueGiven < currentMinimum 
        if(minStack.empty() || val< minStack.top()){
            minStack.push(val);

        }
        else{ //If we pop() from st, we pop() from minStack too.
            minStack.push(minStack.top()); //push the topmost element again to maintain synchronous between the 2 stack
        }
        
    }
    
    void pop() {
        if(!st.empty()) //it means both stacks are not empty.
        {
            // pop from both
            st.pop();
            minStack.pop();
        }
        
    }


    
    int top() {
        if(!st.empty()){
            return st.top();
        }
        return -1;
    }
    
    // finding the minimum element from the stack
    int getMin() {
        if(!minStack.empty()){
            return minStack.top();
        }
        return -1;
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
