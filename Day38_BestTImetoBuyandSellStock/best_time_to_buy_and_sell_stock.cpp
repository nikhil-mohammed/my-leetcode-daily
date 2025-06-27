#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minBuy = prices[0];

        for (int price : prices) {
            maxProfit = max(maxProfit, price - minBuy);
            minBuy = min(minBuy, price);
        }
        return maxProfit;
    }
};

int main() {
    Solution sol;
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    vector<int> prices2 = {7, 6, 4, 3, 1};

    cout << "Max Profit (Test Case 1): " << sol.maxProfit(prices1) << std::endl;
    cout << "Max Profit (Test Case 2): " << sol.maxProfit(prices2) << std::endl;

    return 0;
}
