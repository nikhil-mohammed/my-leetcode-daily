# Day 7 – Perfect Number

## 🧩 Problem

**Problem:** [507. Perfect Number](https://leetcode.com/problems/perfect-number/)  
**Difficulty:** Easy

> A perfect number is a positive integer that is equal to the sum of its **positive divisors**, excluding itself.   
> Given an integer `num`, return `true` if it is a perfect number, else return `false`.

---

## 💡 Approach

We use a **loop up to the square root of the number** to find its divisors efficiently:

- A perfect number must be the sum of its proper divisors (excluding the number itself).
- We iterate from `2` to `√num`, and for each divisor `d`, add both `d` and `num/d` to the sum.
- Add `1` at the beginning since it's always a divisor (except for 1 itself).
- At the end, check if the `sum_of_divisors == num`.

Special case:
- If `num == 1`, it cannot be perfect since it has no proper divisors.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** `O(√n)` — We only loop up to the square root of the number.
- **Space Complexity:** `O(1)` — Constant space usage.

---

## ✅ Sample Cases

| Input | Output | Explanation                        |
|-------|--------|------------------------------------|
| `28`  | `true` | Divisors: 1 + 2 + 4 + 7 + 14 = 28  |
| `7`   | `false`| Divisors: 1 (7 is prime)           |
| `1`   | `false`| No proper divisors                 |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Number Theory
- Math
- Divisors

---

_A classic math problem that rewards optimization with square root logic!_
