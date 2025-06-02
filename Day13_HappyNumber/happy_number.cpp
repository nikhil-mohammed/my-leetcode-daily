#include <iostream>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        int slow = n, fast = sumofSq(n);

        while (slow != fast) {
            fast = sumofSq(fast);
            fast = sumofSq(fast);
            slow = sumofSq(slow);
        }

        return fast == 1;
    }

private:
    int sumofSq(int n) {
        int out = 0;
        while (n != 0) {
            out += (n % 10) * (n % 10);
            n /= 10;
        }
        return out;
    }
};

int main() {
    Solution sol;
    int test1 = 19, test2 = 2;

    cout << "Is 19 a happy number? " << (sol.isHappy(test1) ? "Yes" : "No") << endl;
    cout << "Is 2 a happy number? " << (sol.isHappy(test2) ? "Yes" : "No") << endl;

    return 0;
}
