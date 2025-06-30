class MyStack {
public:
    queue<int> myque; //create a queue

    MyStack() { //constructor call
    }
    
    void push(int x) { //top=stack means back-of-queue
        myque.push(x);

        // rotate the queue k-1 times.
        for(int i=0; i<myque.size()-1; i++){
            myque.push(myque.front());
            myque.pop();
        }
    }
    
    int pop() {
        int values = myque.front(); //top-stack --> last element that we push --> queue.back();
        myque.pop();
        return values;
    }
    
    int top() { //top means last element that we push
        return myque.front();
    }
    
    bool empty() {
        return myque.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
