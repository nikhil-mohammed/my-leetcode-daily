# Day 5 – 258. Add Digits

## 🧩 Problem

**Problem:** [258. Add Digits](https://leetcode.com/problems/add-digits/)  
**Difficulty:** Easy

> Given an integer `num`, repeatedly add all its digits until the result has only one digit, and return it.

---

## 💡 Approach

There are two ways to solve this:

1. **Brute-force** – Keep summing digits until a single digit remains.
2. **Mathematical trick** – Use the **digital root** formula: `num == 0 ? 0 : 1 + (num - 1) % 9`

This formula works because in base 10, the digital root of a number is congruent to the number modulo 9, with adjustments for zero.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** `O(1)` — Direct calculation with no loops.
- **Space Complexity:** `O(1)` — No additional space used.

---

## ✅ Sample Cases

| Input | Output | Explanation                      |
|-------|--------|----------------------------------|
| 38    | 2      | 3 + 8 = 11 → 1 + 1 = 2           |
| 0     | 0      | Edge case                        |
| 99    | 9      | 9 + 9 = 18 → 1 + 8 = 9           |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Math
- Modulo Arithmetic
- Digital Root

---

_This problem was a fun reminder that a little math can go a long way in optimizing a solution!_
