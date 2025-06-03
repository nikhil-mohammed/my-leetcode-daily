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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head) {
            return head;
        }

        ListNode *curr = head;
        int n = 1;
        while (curr->next) {
            n++;
            curr = curr->next;
        }

        curr->next = head;
        k %= n;
        for (int i = 0; i < n - k; i++) {
            curr = curr->next;
        }

        head = curr->next;
        curr->next = nullptr;
        return head;
    }
};

void printList(ListNode* head) {
    cout << "Output: [";
    while (head) {
        cout << head->val;
        if (head->next) cout << ",";
        head = head->next;
    }
    cout << "]" << endl;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int k = 2;

    Solution sol;
    ListNode* result = sol.rotateRight(head, k);
    printList(result);

    return 0;
}