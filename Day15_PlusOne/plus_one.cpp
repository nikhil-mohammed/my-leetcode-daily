#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int one = 1;
        int i = 0;
        reverse(digits.begin(), digits.end());

        while (one) {
            if (i < digits.size()) {
                int sum = digits[i] + one;
                digits[i] = sum % 10;
                one = sum / 10;
            } else {
                digits.push_back(one);
                one = 0;
            }
            i++;
        }

        reverse(digits.begin(), digits.end());
        return digits;
    }
};

void printVector(const vector<int>& v) {
    cout << "Output: [";
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i];
        if (i != v.size() - 1) cout << ",";
    }
    cout << "]" << endl;
}

int main() {
    Solution sol;
    vector<int> digits = {9, 9};
    vector<int> result = sol.plusOne(digits);
    printVector(result);
    return 0;
}
