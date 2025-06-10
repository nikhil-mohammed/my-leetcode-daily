#include <iostream>
#include <cmath>

class Solution {
public:
    int bulbSwitch(int n) {
        return sqrt(n);
    }
};

int main() {
    Solution sol;
    int test_cases[] = {3, 0, 1, 16, 25};
    for (int n : test_cases) {
        std::cout << "bulbSwitch(" << n << ") = " << sol.bulbSwitch(n) << std::endl;
    }
    return 0;
}
