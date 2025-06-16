# Day 27 – Sign of the Product of an Array

## 🧩 Problem

**Problem:** [1822. Sign of the Product of an Array](https://leetcode.com/problems/sign-of-the-product-of-an-array/)  
**Difficulty:** Easy

> Implement a function `signFunc(x)` that returns:
> - 1 if x is positive.
> - -1 if x is negative.
> - 0 if x equals 0.
> 
> You are given an integer array `nums`. Compute the sign of the product of all values in `nums` using `signFunc(product)`.

---

## 💡 Approach

- If the product has **0 in the array**, the result is instantly 0.
- Else, **count the number of negative numbers**.
  - If the count is **even**, product sign is positive (`1`).
  - If the count is **odd**, product sign is negative (`-1`).

We **don't need to actually multiply** the numbers, preventing overflow for large values.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** O(n) – single pass through the array.
- **Space Complexity:** O(1) – no extra space used.

---

## ✅ Sample Cases

| Input                          | Output | Explanation                    |
|-------------------------------|--------|--------------------------------|
| `[-1,-2,-3,-4,3,2,1]`         | 1      | Even count of negatives (4)    |
| `[1,5,0,2,-3]`                | 0      | Contains 0                    |
| `[-1,1,-1,1,-1]`              | -1     | Odd count of negatives (3)     |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Array Traversal
- Counting
- Product Sign Calculation

---

_Simple yet clever use of count instead of actual multiplication!_
