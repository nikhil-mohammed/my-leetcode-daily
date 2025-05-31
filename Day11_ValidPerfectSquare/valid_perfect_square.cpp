#include <iostream>

class Solution {
public:
    bool isPerfectSquare(int num) {
        int guess = 0, mask = 1 << 15;

        while (mask > 0) {
            guess |= mask;
            if (guess > (num / guess)) {
                guess ^= mask;
            }
            mask >>= 1;
        }

        return guess * guess == num;
    }
};

int main() {
    Solution sol;
    int testCases[] = {16, 14, 1, 808201, 2147395600};
    for (int num : testCases) {
        std::cout << "Is " << num << " a perfect square? " 
                  << (sol.isPerfectSquare(num) ? "True" : "False") << std::endl;
    }
    return 0;
}
