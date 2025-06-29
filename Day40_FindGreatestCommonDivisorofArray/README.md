# Day 40 – Find Greatest Common Divisor of Array

## 🧩 Problem

**Link:** [1979. Find Greatest Common Divisor of Array](https://leetcode.com/problems/find-greatest-common-divisor-of-array/)  
**Difficulty:** Easy

> Given an array of integers, return the greatest common divisor (GCD) of the smallest and largest elements.

---

## 💡 Approach

To find the GCD:
- Get the **minimum** and **maximum** elements in the array using `min_element` and `max_element`.
- Use the built-in `__gcd()` function in C++ to find their greatest common divisor.

This ensures we don’t need to manually loop through the array or implement a GCD function from scratch.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** `O(n)` for finding min and max.
- **Space Complexity:** `O(1)` since no extra space is used.

---

## ✅ Sample Cases

| Input                | Output | Explanation                         |
|---------------------|--------|-------------------------------------|
| [2, 5, 6, 9, 10]     | 2      | GCD(2, 10) = 2                      |
| [7, 5, 6, 8, 3]      | 1      | GCD(3, 8) = 1                       |
| [3, 3]               | 3      | GCD(3, 3) = 3                       |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Number Theory
- GCD
- STL Utilities

---

_A crisp problem for brushing up on GCD logic using STL magic!_
