#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* left = nullptr;
        ListNode* right = nullptr;
        ListNode* curr = head;

        while (curr) {
            if (right) {
                right = right->next;
            }
            if (k == 1) {
                left = curr;
                right = head;
            }
            k--;
            curr = curr->next;
        }

        swap(left->val, right->val);
        return head;
    }
};

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}


int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution sol;
    ListNode* result = sol.swapNodes(head, 2);
    printList(result);

    return 0;
}
