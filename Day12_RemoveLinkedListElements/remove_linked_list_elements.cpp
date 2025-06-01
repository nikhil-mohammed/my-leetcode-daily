#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(-1, head);
        ListNode* curr = &dummy;

        while (curr->next) {
            if (curr->next->val == val) {
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
            }
        }

        return dummy.next;
    }
};

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

ListNode* createList(initializer_list<int> vals) {
    ListNode* dummy = new ListNode(-1);
    ListNode* tail = dummy;
    for (int val : vals) {
        tail->next = new ListNode(val);
        tail = tail->next;
    }
    return dummy->next;
}

int main() {
    Solution sol;
    ListNode* head = createList({1, 2, 6, 3, 4, 5, 6});
    int valToRemove = 6;
    ListNode* result = sol.removeElements(head, valToRemove);
    printList(result);
    return 0;
}
