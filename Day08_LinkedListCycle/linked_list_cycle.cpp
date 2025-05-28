#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;

            if (fast == slow) return true;
        }
        return false;
    }
};

// Example usage (non-cyclic sample)
int main() {
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    node1->next = node2;
    //node2->next = node1; // Uncomment to create cycle

    Solution sol;
    cout << (sol.hasCycle(node1) ? "Cycle detected" : "No cycle") << endl;

    delete node1;
    delete node2;

    return 0;
}
