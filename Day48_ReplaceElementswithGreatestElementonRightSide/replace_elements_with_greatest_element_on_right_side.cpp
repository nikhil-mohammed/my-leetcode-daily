#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        int rightMax = -1;
        for (int i = n - 1; i >= 0; --i) {
            ans[i] = rightMax;
            rightMax = max(rightMax, arr[i]);
        }
        return ans;
    }
};

void printVector(const vector<int>& v) {
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    Solution sol;
    
    vector<int> test1 = {17, 18, 5, 4, 6, 1};
    vector<int> test2 = {400};

    cout << "Input: [17,18,5,4,6,1] -> Output: ";
    printVector(sol.replaceElements(test1));

    cout << "Input: [400] -> Output: ";
    printVector(sol.replaceElements(test2));

    return 0;
}
