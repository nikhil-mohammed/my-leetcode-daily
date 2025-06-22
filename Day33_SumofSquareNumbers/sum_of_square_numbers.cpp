#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
        long long a = 0;
        long long b = sqrt(c);

        while (a <= b) {
            long long sum = a * a + b * b;
            if (sum == c)
                return true;
            else if (sum < c)
                a++;
            else
                b--;
        }
        return false;
    }
};

int main() {
    Solution sol;
    int c1 = 5;
    int c2 = 3;

    cout << "Input: c = " << c1 << endl;
    cout << "Output: " << (sol.judgeSquareSum(c1) ? "true" : "false") << endl;

    cout << "Input: c = " << c2 << endl;
    cout << "Output: " << (sol.judgeSquareSum(c2) ? "true" : "false") << endl;

    return 0;
}
