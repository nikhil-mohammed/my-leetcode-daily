#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        const int MIN = -2147483648;
        const int MAX = 2147483647;

        int result = 0;
        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            if (result > MAX / 10 || (result == MAX / 10 && digit > MAX % 10))
                return 0;
            if (result < MIN / 10 || (result == MIN / 10 && digit < MIN % 10))
                return 0;

            result = (result * 10) + digit;
        }

        return result;
    }
};

int main() {
    Solution sol;
    int x1 = 123;
    cout << "Reversed " << x1 << " = " << sol.reverse(x1) << endl;
    int x2 = -123;
    cout << "Reversed " << x2 << " = " << sol.reverse(x2) << endl;
    int x3 = 120;
    cout << "Reversed " << x3 << " = " << sol.reverse(x3) << endl;
    return 0;
}
