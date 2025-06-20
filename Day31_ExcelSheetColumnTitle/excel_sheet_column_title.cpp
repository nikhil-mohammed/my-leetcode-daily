#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result;
        while (columnNumber > 0) {
            columnNumber--;
            int offset = columnNumber % 26;
            result += ('A' + offset);
            columnNumber /= 26;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
    Solution sol;
    int columnNumber = 28;
    string result = sol.convertToTitle(columnNumber);
    cout << "Output: \"" << result << "\"" << endl;
    return 0;
}
