#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for (char c : columnTitle) {
            int value = c - 'A' + 1;
            result = result * 26 + value;
        }
        return result;
    }
};

int main() {
    Solution sol;

    cout << "Input: \"A\" → Output: " << sol.titleToNumber("A") << endl;
    cout << "Input: \"AB\" → Output: " << sol.titleToNumber("AB") << endl;
    cout << "Input: \"ZY\" → Output: " << sol.titleToNumber("ZY") << endl;
    cout << "Input: \"FXSHRXW\" → Output: " << sol.titleToNumber("FXSHRXW") << endl;

    return 0;
}
