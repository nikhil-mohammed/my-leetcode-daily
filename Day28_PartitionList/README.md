# Day 28 – Partition List

## 🧩 Problem

**Problem:** [86. Partition List](https://leetcode.com/problems/partition-list/)  
**Difficulty:** Medium  

> Given the head of a linked list and a value `x`, partition it such that all nodes less than `x` come before nodes greater than or equal to `x`. Preserve the original relative order of the nodes in each partition.

---

## 💡 Approach

We use **two dummy nodes** to separate the list:
- `leftDummy` for nodes `< x`
- `rightDummy` for nodes `>= x`

Traverse the list:
- Attach nodes to `leftDummy` or `rightDummy` as per their value.
- After traversal, link the two lists together.

This keeps the order intact without creating new nodes.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** O(n) — Each node is visited once.
- **Space Complexity:** O(1) — Only pointers are used.

---

## ✅ Sample Cases

| Input                        | x | Output                     | Explanation                          |
|-----------------------------|---|---------------------------|--------------------------------------|
| [1,4,3,2,5,2]               | 3 | [1,2,2,4,3,5]             | Nodes <3 first, others after.        |
| [2,1]                       | 2 | [1,2]                     | 1 comes before 2.                    |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Linked List Manipulation
- Two-Pointer Technique
- Partitioning Problems

---

_An elegant way to partition linked lists while preserving original node order._
