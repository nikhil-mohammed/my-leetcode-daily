#include <iostream>
using namespace std;

class Solution {
public:
    int countOdds(int low, int high) {
        int length = high - low + 1;
        int count = length / 2;
        if (length % 2 == 1 && low % 2 == 1) {
            count++;
        }
        return count;
    }
};

int main() {
    Solution sol;
    int low = 3, high = 7;
    cout << "Input: low = " << low << ", high = " << high << endl;
    cout << "Output: " << sol.countOdds(low, high) << endl;

    low = 8, high = 10;
    cout << "Input: low = " << low << ", high = " << high << endl;
    cout << "Output: " << sol.countOdds(low, high) << endl;

    return 0;
}
