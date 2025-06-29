#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minNum = *min_element(nums.begin(), nums.end());
        int maxNum = *max_element(nums.begin(), nums.end());
        return __gcd(minNum, maxNum);
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {2, 5, 6, 9, 10};
    vector<int> nums2 = {7, 5, 6, 8, 3};
    vector<int> nums3 = {3, 3};

    cout << "Output 1: " << sol.findGCD(nums1) << endl;
    cout << "Output 2: " << sol.findGCD(nums2) << endl;
    cout << "Output 3: " << sol.findGCD(nums3) << endl;

    return 0;
}
