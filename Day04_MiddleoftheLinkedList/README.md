# Day 4 – Middle of the Linked List

## 🧩 Problem

**Problem:** [876. Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/)  
**Difficulty:** Easy

> Given the head of a singly linked list, return the middle node of the linked list.  
> If there are two middle nodes, return the second middle node.

---

## 💡 Approach

To solve this, I used the **two-pointer technique**:

- One pointer moves one node at a time (`one_step`).
- Another moves two nodes at a time (`two_step`).
- When `two_step` reaches the end, `one_step` will be at the middle.

This is an elegant and efficient way to find the middle in a single pass.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** `O(n)` — Single traversal of the list.
- **Space Complexity:** `O(1)` — Only two pointers used.

---

## ✅ Sample Cases

| Input           | Output | Explanation                              |
|----------------|--------|------------------------------------------|
| `[1,2,3,4,5]`   | `3`    | Middle node is 3                         |
| `[1,2,3,4,5,6]` | `4`    | Two middle nodes: 3 and 4 → return 4     |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Linked List
- Two Pointers
- Floyd’s Algorithm

---

_This problem was a good test of pointer movement and loop control — the two-pointer approach shines again!_
