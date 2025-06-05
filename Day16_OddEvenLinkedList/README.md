# Day 16 – Odd Even Linked List

## 🧩 Problem

**Problem:** [328. Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list/)  
**Difficulty:** Medium

> Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.  
> The first node is considered at index 1 (odd), the second at index 2 (even), and so on.  
>  
> You must solve it with **O(1)** extra space and **O(n)** time complexity.

---

## 💡 Approach

The key idea is to **separate odd-indexed and even-indexed nodes** while preserving their original order, then reconnect them.

- Use two pointers: `odd` and `even` to track nodes at odd and even indices.
- `evenHead` is used to remember the start of the even list so it can be reattached at the end.
- Iterate through the list and rearrange links such that:
  - odd points to the next odd node,
  - even points to the next even node.
- Finally, connect the last odd node to the start of the even list.

This approach ensures the original relative order is maintained within each group.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** O(n) — Each node is visited once.
- **Space Complexity:** O(1) — Rearranged in-place without extra memory.

---

## ✅ Sample Cases

| Input                   | Output              | Explanation                          |
|------------------------|---------------------|--------------------------------------|
| [1,2,3,4,5]            | [1,3,5,2,4]         | Odd: 1→3→5, Even: 2→4                |
| [2,1,3,5,6,4,7]        | [2,3,6,7,1,5,4]     | Odd: 2→3→6→7, Even: 1→5→4            |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Linked List Manipulation  
- Two-Pointer Technique  
- In-Place Reordering

---

_Simple pointer rearrangement, but a powerful demonstration of space-efficient algorithms!_
