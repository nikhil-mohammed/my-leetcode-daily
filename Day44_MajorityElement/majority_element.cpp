#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        while (true) {
            int candidate = nums[rand() % n];
            int count = 0;
            for (int num : nums) {
                if (num == candidate) {
                    count++;
                }
            }
            if (count > n / 2) {
                return candidate;
            }
        }
    }
};

int main() {

    Solution sol;

    vector<int> nums1 = {3, 2, 3};
    vector<int> nums2 = {2, 2, 1, 1, 1, 2, 2};

    cout << "Majority in [3, 2, 3]: " << sol.majorityElement(nums1) << endl;
    cout << "Majority in [2, 2, 1, 1, 1, 2, 2]: " << sol.majorityElement(nums2) << endl;

    return 0;
}
