#include <iostream>
using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 1) return false;

        int sum_of_divisors = 1;

        for (int divisor = 2; divisor * divisor <= num; ++divisor) {
            if (num % divisor == 0) {
                sum_of_divisors += divisor;

                if (divisor != num / divisor)
                    sum_of_divisors += num / divisor;
            }
        }

        return sum_of_divisors == num;
    }
};

int main() {
    Solution sol;
    int num = 28;
    cout << (sol.checkPerfectNumber(num) ? "True" : "False") << endl;
    return 0;
}
