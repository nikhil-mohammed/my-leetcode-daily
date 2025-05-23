#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            ans += i - nums[i];
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> test = {3, 0, 1};
    cout << "Missing number: " << sol.missingNumber(test) << endl;
    return 0;
}
