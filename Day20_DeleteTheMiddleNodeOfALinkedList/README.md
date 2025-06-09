# Day 20 – Delete the Middle Node of a Linked List

## 🧩 Problem

**Problem:** [2095. Delete the Middle Node of a Linked List](https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/)  
**Difficulty:** Medium

> Given the head of a singly linked list, delete the middle node and return the head of the modified list.
> The middle node is the ⌊n / 2⌋th node (0-based indexing).

---

## 💡 Approach

- Use **slow and fast pointers** to find the middle node:
  - Fast moves twice as fast as slow.
  - When fast reaches the end, slow is at the middle.
- Maintain a `prev` pointer to skip the middle node.
- If the list has only one node, return `nullptr`.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** O(n) – Single pass through the list.
- **Space Complexity:** O(1) – Only pointers used.

---

## ✅ Sample Cases

| Input                  | Output         | Explanation                                |
|-----------------------|---------------|--------------------------------------------|
| [1,3,4,7,1,2,6]       | [1,3,4,1,2,6] | Middle node `7` is removed.                 |
| [1,2,3,4]             | [1,2,4]       | Middle node `3` is removed.                 |
| [2,1]                 | [2]           | Middle node `1` is removed.                 |
| [1]                   | []            | Single node removed, list is empty.         |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Slow & Fast Pointer Technique
- Linked List Manipulation
- In-place Deletion

---

_Clean and efficient pointer-based solution!_
