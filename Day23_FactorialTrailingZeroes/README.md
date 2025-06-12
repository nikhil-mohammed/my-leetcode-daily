# Day 23 – Factorial Trailing Zeroes

## 🧩 Problem

**Problem:** [172. Factorial Trailing Zeroes](https://leetcode.com/problems/factorial-trailing-zeroes/)  
**Difficulty:** Medium

> Given an integer n, return the number of trailing zeroes in n!.

---

## 💡 Approach

- The number of trailing zeroes is determined by the number of **pairs of 2 and 5** in the prime factorization of n!.
- Since factors of 2 are abundant, we only need to count the factors of 5.
- Repeatedly divide n by 5 and accumulate the quotients.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** O(log n) — each division by 5 reduces n.
- **Space Complexity:** O(1) — no extra space required.

---

## ✅ Sample Cases

| Input | Output | Explanation                        |
|-------|--------|------------------------------------|
| 3     | 0      | 3! = 6, no trailing zero.           |
| 5     | 1      | 5! = 120, one trailing zero.        |
| 0     | 0      | 0! = 1, no trailing zero.          |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Prime Factorization
- Number Theory
- Mathematical Tricks

---

_Short, clean, and a great use of mathematical insight!_