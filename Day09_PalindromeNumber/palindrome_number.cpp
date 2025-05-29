#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x != 0 && x % 10 == 0)) return false;

        int rev_int = 0;

        while (x > rev_int) {
            rev_int = rev_int * 10 + x % 10;
            x /= 10;
        }

        return x == rev_int || x == rev_int / 10;
    }
};

int main() {
    Solution solution;

    // Sample Test Cases
    int test1 = 121;
    int test2 = -121;
    int test3 = 10;

    cout << "Input: " << test1 << " → Output: " << (solution.isPalindrome(test1) ? "true" : "false") << endl;
    cout << "Input: " << test2 << " → Output: " << (solution.isPalindrome(test2) ? "true" : "false") << endl;
    cout << "Input: " << test3 << " → Output: " << (solution.isPalindrome(test3) ? "true" : "false") << endl;

    return 0;
}
