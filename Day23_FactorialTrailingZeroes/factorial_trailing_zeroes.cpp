#include <iostream>
using namespace std;

class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        while(n >= 5) {
            n /= 5;
            count += n;
        }
        return count;
    }
};

int main() {
    Solution sol;
    int n = 5;
    cout << "Number of trailing zeroes in " << n << "! is: " << sol.trailingZeroes(n) << endl;
    return 0;
}