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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (!head) return nullptr;

        ListNode* curr = head;

        while (curr->next) {
            int n1 = curr->val, n2 = curr->next->val;
            int gcdValue = gcd(n1, n2);
            ListNode* newNode = new ListNode(gcdValue, curr->next);
            curr->next = newNode;
            curr = newNode->next;
        }

        return head;
    }

private:
    int gcd(int a, int b) {
        while (b > 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    ListNode* head = new ListNode(18);
    head->next = new ListNode(6);
    head->next->next = new ListNode(10);
    head->next->next->next = new ListNode(3);

    Solution sol;
    head = sol.insertGreatestCommonDivisors(head);

    printList(head);

    return 0;
}
