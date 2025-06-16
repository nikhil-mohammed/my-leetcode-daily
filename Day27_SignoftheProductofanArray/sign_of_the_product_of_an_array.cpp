#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negCount = 0;

        for(int num : nums) {
            if(num == 0) return 0;
            if(num < 0) negCount++;
        }

        return (negCount % 2 == 0) ? 1 : -1;
    }
};

int main() {
    Solution solution;

    vector<int> nums1 = {-1, -2, -3, -4, 3, 2, 1};
    cout << "Output for nums1: " << solution.arraySign(nums1) << endl;

    vector<int> nums2 = {1, 5, 0, 2, -3};
    cout << "Output for nums2: " << solution.arraySign(nums2) << endl;

    vector<int> nums3 = {-1, 1, -1, 1, -1};
    cout << "Output for nums3: " << solution.arraySign(nums3) << endl;

    return 0;
}
