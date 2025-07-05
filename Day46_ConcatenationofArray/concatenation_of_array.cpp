#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2 * n);
        for (int i = 0; i < n; ++i) {
            ans[i] = ans[i + n] = nums[i];
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
    vector<int> nums1 = {1, 2, 1};
    vector<int> nums2 = {1, 3, 2, 1};

    cout << "Input: [1, 2, 1] => Output: ";
    printVector(sol.getConcatenation(nums1));

    cout << "Input: [1, 3, 2, 1] => Output: ";
    printVector(sol.getConcatenation(nums2));

    return 0;
}
