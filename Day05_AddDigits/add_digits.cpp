#include <iostream>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        return num == 0 ? 0 : 1 + (num - 1) % 9;
    }
};

int main() {
    Solution sol;
    int test1 = 38;
    int test2 = 0;

    cout << "Input: 38 -> Output: " << sol.addDigits(test1) << endl;
    cout << "Input: 0 -> Output: " << sol.addDigits(test2) << endl;

    return 0;
}
