# Day 10 – Palindrome Linked List

## 🧩 Problem

**Problem:** [234. Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)  
**Difficulty:** Easy

> Given the head of a singly linked list, return true if it is a palindrome, or false otherwise.

---

## 💡 Approach

1. Use slow and fast pointers to find the middle of the list.
2. Reverse the second half of the list in-place.
3. Compare the two halves node by node.
4. Return `true` if all nodes match, otherwise return `false`.

This approach ensures O(n) time complexity and O(1) space usage.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** `O(n)` — One pass to find the middle, one pass to reverse, and one pass to compare.
- **Space Complexity:** `O(1)` — Constant space, in-place reversal.

---

## ✅ Sample Cases

| Input           | Output | Explanation                             |
|----------------|--------|-----------------------------------------|
| [1,2,2,1]       | true   | It reads the same forwards and backwards |
| [1,2]           | false  | It does not form a palindrome            |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Topics

- Linked List
- Two Pointer Technique
- In-place Reversal

---

_A clean reverse-and-compare strategy makes palindrome detection neat and fast!_
