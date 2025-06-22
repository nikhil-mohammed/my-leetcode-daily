# Day 33 – Sum of Square Numbers

## 🧩 Problem

**Problem:** [633. Sum of Square Numbers](https://leetcode.com/problems/sum-of-square-numbers/)  
**Difficulty:** Medium

> Given a non-negative integer `c`, decide whether there exist two integers `a` and `b` such that:  
> `a^2 + b^2 = c`

---

## 💡 Approach

I used a **two-pointer technique**:
- Start with `a = 0` and `b = sqrt(c)`.
- Compute the sum `a^2 + b^2`:
  - If it equals `c`, return `true`.
  - If the sum is less than `c`, increment `a`.
  - If the sum is greater than `c`, decrement `b`.
- Continue until `a > b`.

This avoids brute-force and checks all possible integer pairs efficiently.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** O(√c)
- **Space Complexity:** O(1)

---

## ✅ Sample Cases

| Input | Output | Explanation |
|-------|--------|-------------|
| 5     | true   | 1² + 2² = 5 |
| 3     | false  | No such integer pairs exist |

---

## 🛠️ Language

**C++**

---

## 🔗 Related Concepts

- Two Pointer
- Number Theory
- Square Numbers

---

_Efficient method for checking sums of two squares without using extra space!_
