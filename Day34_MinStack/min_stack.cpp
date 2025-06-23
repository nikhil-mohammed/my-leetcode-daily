#include <iostream>
#include <stack>
using namespace std;

class MinStack {
private:
    long min;
    std::stack<long> stack;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        if (stack.empty()) {
            stack.push(0);
            min = val;
        } else {
            stack.push(val - min);
            if (val < min) min = val;
        }
    }
    
    void pop() {
        if (stack.empty()) return;
        
        long pop = stack.top();
        stack.pop();
        
        if (pop < 0) min = min - pop;
    }
    
    int top() {
        long top = stack.top();
        return (top > 0) ? (top + min) : (int)min;
    }
    
    int getMin() {
        return (int)min;
    }
};


int main() {
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout << "getMin(): " << minStack.getMin() << endl;
    minStack.pop();
    cout << "top(): " << minStack.top() << endl;
    cout << "getMin(): " << minStack.getMin() << endl;
    return 0;
}
