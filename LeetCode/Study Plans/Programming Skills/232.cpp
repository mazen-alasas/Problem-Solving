class MyQueue {
private:
    stack<int> inStack;
    stack<int> outStack;
    
public:
    void push(int x) {
        inStack.push(x);
    }

    int pop() {
        peek();
        const int val = outStack.top();
        outStack.pop();
        return val;
    }

    int peek() {
        if (outStack.empty())
        while (!inStack.empty())
            outStack.push(inStack.top()), inStack.pop();
        return outStack.top();
    }
    
    bool empty() {
        return inStack.empty() && outStack.empty();
    }
};