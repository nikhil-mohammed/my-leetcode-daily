# Day 42 – Pascal's Triangle II

## 🧩 Problem

**Problem:** [119. Pascal's Triangle II](https://leetcode.com/problems/pascals-triangle-ii/)  
**Difficulty:** Easy  

> Given an integer `rowIndex`, return the `rowIndex`th (0-indexed) row of Pascal's triangle.

Each value in the row is based on the sum of two elements directly above it.

---

## 💡 Approach

Instead of generating the entire triangle, we build the desired row directly using the **binomial coefficient** relationship:

\[
C(n, k) = C(n, k - 1) \times \frac{n - k + 1}{k}
\]

Steps:
- Initialize the row with the first element `1`.
- Use the formula above to compute each next element from the previous one in a loop.

This avoids unnecessary space and gives a precise and optimized construction of the target row.

---

## ⏱️ Time & Space Complexity

- **Time:** `O(rowIndex)`
- **Space:** `O(rowIndex)`

---

## ✅ Test Cases

| Input          | Output             | Explanation                  |
|----------------|--------------------|------------------------------|
| `rowIndex = 0` | `[1]`              | First row of Pascal’s triangle |
| `rowIndex = 1` | `[1, 1]`           | Second row                  |
| `rowIndex = 3` | `[1, 3, 3, 1]`     | Uses combination logic      |
| `rowIndex = 5` | `[1, 5, 10, 10, 5, 1]` | Middle elements calculated using formula |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Combinatorics
- Pascal’s Triangle
- Binomial Coefficient
- Math Optimization

---

_This is a perfect example of how mathematical insights can lead to elegant and efficient code._
