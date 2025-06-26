#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> closeToOpen = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for (char c : s) {
            if (closeToOpen.count(c)) {
                if (!st.empty() && st.top() == closeToOpen[c]) {
                    st.pop();
                } else {
                    return false;
                }
            } else {
                st.push(c);
            }
        }

        return st.empty();
    }
};

int main() {
    Solution sol;
    string s1 = "()";
    string s2 = "()[]{}";
    string s3 = "(]";
    string s4 = "([])";

    cout << boolalpha;
    cout << "Input: \"()\"       => " << sol.isValid(s1) << endl;
    cout << "Input: \"()[]{}\"   => " << sol.isValid(s2) << endl;
    cout << "Input: \"(]\"       => " << sol.isValid(s3) << endl;
    cout << "Input: \"([])\"     => " << sol.isValid(s4) << endl;

    return 0;
}
