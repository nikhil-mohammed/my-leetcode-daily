#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Solution {
public:
    int scoreOfString(string s) {
        int res = 0;
        for (int i = 0; i < s.length() - 1; i++) {
            res += abs(s[i] - s[i + 1]);
        }
        return res;
    }
};

int main() {
    Solution sol;

    cout << "Score of \"hello\": " << sol.scoreOfString("hello") << endl;
    cout << "Score of \"zaz\": " << sol.scoreOfString("zaz") << endl;
    cout << "Score of \"abc\": " << sol.scoreOfString("abc") << endl;

    return 0;
}
