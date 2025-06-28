#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        for (const string& c : tokens) {
            if (c == "+" || c == "-" || c == "*" || c == "/") {
                int a = stack.top(); stack.pop();
                int b = stack.top(); stack.pop();
                if (c == "+") stack.push(b + a);
                else if (c == "-") stack.push(b - a);
                else if (c == "*") stack.push(b * a);
                else if (c == "/") stack.push(b / a);
            } else {
                stack.push(stoi(c));
            }
        }
        return stack.top();
    }
};

int main() {
    Solution sol;

    vector<string> tokens1 = {"2", "1", "+", "3", "*"};
    vector<string> tokens2 = {"4", "13", "5", "/", "+"};
    vector<string> tokens3 = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};

    cout << "Output 1: " << sol.evalRPN(tokens1) << endl;
    cout << "Output 2: " << sol.evalRPN(tokens2) << endl;
    cout << "Output 3: " << sol.evalRPN(tokens3) << endl;

    return 0;
}
