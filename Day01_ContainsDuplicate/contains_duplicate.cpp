#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> nums_seen;
        for (int num : nums) {
            if (nums_seen.count(num)) return true;
            nums_seen.insert(num);
        }
        return false;
    }
};

int main() {
    Solution sol;
    vector<int> test = {1, 2, 3, 1};
    cout << (sol.containsDuplicate(test) ? "True" : "False") << endl;
    return 0;
}