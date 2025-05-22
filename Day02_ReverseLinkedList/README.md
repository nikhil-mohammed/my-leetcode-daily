# Day 2 – Reverse Linked List

## 🧩 Problem

**Problem:** [206. Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)  
**Difficulty:** Easy

> Given the head of a singly linked list, reverse the list, and return the reversed list.

---

## 💡 Approach

To reverse the list, we iterate through each node and flip the direction of the `next` pointer:

- Maintain two pointers: `prev` (initially `nullptr`) and `curr` (starting at `head`).
- At each step:
  - Store `curr->next` temporarily.
  - Point `curr->next` to `prev`.
  - Move `prev` and `curr` one step forward.
- When `curr` becomes `nullptr`, `prev` will point to the new head of the reversed list.

This is an in-place solution using iteration — clean and efficient.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** `O(n)` — We traverse the list once.
- **Space Complexity:** `O(1)` — No extra space is used except a few pointers.

---

## ✅ Sample Cases

| Input          | Output       | Explanation               |
|----------------|--------------|---------------------------|
| `[1, 2, 3, 4, 5]` | `[5, 4, 3, 2, 1]` | Reversed version of the list |
| `[1, 2]`       | `[2, 1]`     | Two nodes reversed        |
| `[]`           | `[]`         | Empty list stays empty    |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Linked List
- Pointers
- In-place Operations

---

_A classic linked list problem that helps build confidence with pointer manipulation and iterative logic. A must-know for any technical interview._
