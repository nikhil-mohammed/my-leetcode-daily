# Day 24 – Insert Greatest Common Divisors in Linked List

## 🧩 Problem

**Problem:** [2807. Insert Greatest Common Divisors in Linked List](https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/)  
**Difficulty:** Medium

> Given the head of a linked list, insert a new node with a value equal to the GCD of each pair of adjacent nodes.

---

## 💡 Approach

This problem involves two main steps:

1. **Traverse the Linked List**: Move through each node in the list.
2. **Calculate GCD**: For every pair of adjacent nodes, compute their GCD using the Euclidean Algorithm and insert a new node containing this value.

A helper function is used to calculate the GCD efficiently.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** O(n) — Each node is visited once.
- **Space Complexity:** O(1) — Only a constant amount of extra space is used.

---

## ✅ Sample Cases

| Input          | Output                | Explanation                                        |
|---------------|-----------------------|----------------------------------------------------|
| [18,6,10,3]   | [18,6,6,2,10,1,3]     | GCD(18,6)=6, GCD(6,10)=2, GCD(10,3)=1 inserted     |
| [7]           | [7]                   | Single node, no insertion needed                   |

---

## 🛠️ Language

- **C++**

---

## 🔗 Related Concepts

- Linked List Manipulation
- Euclidean Algorithm (GCD)
- Pointers

---

_Elegant blend of mathematical computation and linked list operations!_
