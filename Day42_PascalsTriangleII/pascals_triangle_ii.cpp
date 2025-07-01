#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row = {1};
        for (int i = 1; i <= rowIndex; i++) {
            row.push_back(static_cast<int>(row.back() * 1LL * (rowIndex - i + 1) / i));
        }
        return row;
    }
};

int main() {
    Solution sol;
    vector<int> row = sol.getRow(3);

    cout << "Pascal's Triangle Row 3: ";
    for (int num : row) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
