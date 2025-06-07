# Day 18 – Swapping Nodes in a Linked List

## 🧩 Problem

**Problem:** [1721. Swapping Nodes in a Linked List](https://leetcode.com/problems/swapping-nodes-in-a-linked-list/)  
**Difficulty:** Medium

> Given the head of a singly linked list and an integer `k`, swap the values of the `k`th node from the beginning and the `k`th node from the end (1-indexed).

---

## 💡 Approach

This problem is a **single pass two-pointer trick**:

- Traverse through the list:
  - When you reach the `k`th node from the beginning, store it in `left`.
  - Start a second pointer `right` from the head.
  - Continue the traversal — when you reach the end, `right` will point to the `k`th node from the end.
- **Swap values** of the two nodes.

This avoids computing the list length or creating any auxiliary structures.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** O(n) — One full traversal of the list.
- **Space Complexity:** O(1) — In-place with no extra memory.

---

## ✅ Sample Cases

| Input                    | k  | Output              | Explanation                                |
|-------------------------|----|---------------------|--------------------------------------------|
| [1,2,3,4,5]             | 2  | [1,4,3,2,5]         | Swap 2nd from start with 2nd from end      |
| [7,9,6,6,7,8,3,0,9,5]   | 5  | [7,9,6,6,8,7,3,0,9,5] | Swap 5th from start with 5th from end |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Linked List  
- Two-pointer Technique  
- In-place Value Swapping

---

_Swapping values without extra space is a great example of clean pointer logic!_
