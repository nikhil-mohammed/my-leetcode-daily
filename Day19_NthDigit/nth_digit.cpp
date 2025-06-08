#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int findNthDigit(int n) {
        long long digitLength = 1;
        long long count = 9;
        long long start = 1;

        while (n > digitLength * count) {
            n -= digitLength * count;
            digitLength++;
            count *= 10;
            start *= 10;
        }

        start += (n - 1) / digitLength;

        string number = to_string(start);
        return number[(n - 1) % digitLength] - '0';
    }
};

int main() {
    Solution sol;
    cout << sol.findNthDigit(3) << endl;
    cout << sol.findNthDigit(11) << endl;
    return 0;
}
