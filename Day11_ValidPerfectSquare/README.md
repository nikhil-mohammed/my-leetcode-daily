# Day 11 – Valid Perfect Square

## 🧩 Problem

**Problem:** [367. Valid Perfect Square](https://leetcode.com/problems/valid-perfect-square/)  
**Difficulty:** Easy

Given a positive integer `num`, return true if `num` is a perfect square, otherwise false. You must not use any built-in library function such as `sqrt`.

---

## 💡 Approach

I implemented a **bitwise binary search** to find the integer square root without floating-point operations:

- Initialize `guess` to 0 and `mask` to the highest relevant bit (1 << 15).
- For each bit from high to low:
  - Set the bit in `guess`.
  - If `guess * guess` exceeds `num`, unset the bit.
- At the end, check if `guess * guess == num` to determine if it's a perfect square.

This approach is efficient, accurate, and does not rely on floating-point arithmetic or built-in functions.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** O(1) — We perform a fixed number of bit checks (up to 16 bits for 32-bit integers).  
- **Space Complexity:** O(1) — Only a few variables used.

---

## ✅ Sample Cases

| Input  | Output | Explanation                   |
|--------|---------|------------------------------|
| 16     | true    | 4 * 4 = 16                   |
| 14     | false   | 14 is not a perfect square   |
| 808201 | true    | 899 * 899 = 808201           |
| 1      | true    | 1 * 1 = 1                   |
| 2147395600 | true | 46340 * 46340 = 2147395600   |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Binary Search  
- Bit Manipulation  
- Math  

---

*Efficiently finding perfect squares without built-ins is a neat exercise in binary search and bitwise operations!*
