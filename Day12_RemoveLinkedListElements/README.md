# Day 12 – Remove Linked List Elements

## 🧩 Problem

**Problem:** [203. Remove Linked List Elements](https://leetcode.com/problems/remove-linked-list-elements/)  
**Difficulty:** Easy

Given the head of a linked list and an integer `val`, remove all the nodes of the linked list that have `Node.val == val`, and return the new head.

---

## 💡 Approach

Used a **dummy node** to simplify edge cases such as deleting the head:
- Initialize a dummy node pointing to `head`.
- Traverse using a `curr` pointer.
- If `curr->next->val == val`, skip that node.
- Else, move `curr` forward.
- Finally, return `dummy.next` as the new head.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** O(n), where n is the number of nodes.
- **Space Complexity:** O(1), only constant extra space used.

---

## ✅ Sample Test Cases

| Input List          | Value to Remove | Output List   |
|---------------------|------------------|----------------|
| [1,2,6,3,4,5,6]     | 6                | [1,2,3,4,5]    |
| []                  | 1                | []             |
| [7,7,7,7]           | 7                | []             |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Concepts Covered

- Linked List Traversal  
- Dummy Node Technique  
- Pointer Manipulation

---

*This problem is a great example of how a dummy node simplifies edge-case handling in linked list operations.*
