# Day 48 – Replace Elements with Greatest Element on Right Side

## 🧩 Problem

**Problem:** [1299. Replace Elements with Greatest Element on Right Side](https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/)  
**Difficulty:** Easy  

> Given an array `arr`, replace every element with the greatest element among the elements to its right, and replace the last element with -1.

---

## 💡 Approach

To solve this efficiently:
- Traverse the array from **right to left**.
- Keep a running `rightMax` that tracks the maximum element to the right.
- At each index:
  - Assign the current value of `rightMax` to the current index.
  - Update `rightMax` to be the max of itself and the current value.

This ensures a single-pass solution without needing nested loops.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** `O(n)`  
- **Space Complexity:** `O(n)` (or `O(1)` if modifying in-place)

---

## ✅ Test Cases

| Input                | Output         | Explanation                                 |
|---------------------|----------------|---------------------------------------------|
| `[17,18,5,4,6,1]`    | `[18,6,6,6,1,-1]` | Max element to the right at each index      |
| `[400]`              | `[-1]`         | Only one element, no right element exists   |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Array Manipulation
- Reverse Traversal
- In-place Updates

---

_A smart use of reverse traversal to replace brute force with elegance._
