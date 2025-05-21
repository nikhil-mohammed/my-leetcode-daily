# Day 1 – Contains Duplicate

## 🧩 Problem

**Problem:** [217. Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)  
**Difficulty:** Easy

> Given an integer array `nums`, return `true` if any value appears at least twice in the array, and return `false` if every element is distinct.

---

## 💡 Approach

To efficiently check for duplicates in the array, we use an **unordered set**:

- Iterate through each number in the array.
- For every number:
  - If it's already in the set → return `true` (duplicate found).
  - Otherwise, add it to the set.
- If the loop completes without returning, return `false` (all elements are unique).

This is more efficient than brute force or sorting since we only need a single pass through the array.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** `O(n)` — We traverse the array once.
- **Space Complexity:** `O(n)` — In the worst case, all elements are unique and stored in the set.

---

## ✅ Sample Cases

| Input             | Output | Explanation                         |
|------------------|--------|-------------------------------------|
| `[1, 2, 3, 1]`    | `true` | 1 appears more than once.           |
| `[1, 2, 3, 4]`    | `false`| All elements are unique.            |
| `[1,1,1,3,3,4,3]` | `true` | Multiple duplicates exist.          |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Hashing
- Set
- Array Traversal

---

_This was a good warm-up problem to start off the challenge — a simple yet elegant reminder of how powerful hash-based structures can be in solving array-related problems efficiently._
