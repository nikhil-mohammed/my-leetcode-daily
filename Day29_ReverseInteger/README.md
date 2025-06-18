# Day 29 – Reverse Integer

## 🧩 Problem

**Problem:** [7. Reverse Integer](https://leetcode.com/problems/reverse-integer/)  
**Difficulty:** Medium  

> Given a signed 32-bit integer `x`, return `x` with its digits reversed. If reversing `x` causes the value to go outside the signed 32-bit integer range [-2³¹, 2³¹ - 1], return 0.

---

## 💡 Approach

The idea is to:
1. Pop the last digit using `x % 10`.
2. Push this digit to `result * 10 + digit`.
3. Before pushing, check for possible integer overflow/underflow using `INT_MAX` and `INT_MIN`.

**Edge cases:**  
- Overflow/underflow while reversing is handled beforehand.
- When the result overflows, immediately return 0.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** O(log₁₀x) — There are log₁₀x digits in the number.
- **Space Complexity:** O(1) — Constant space.

---

## ✅ Sample Cases

| Input | Output | Explanation         |
|-------|--------|---------------------|
| 123   | 321    | Simple reversal      |
| -123  | -321   | Negative number      |
| 120   | 21     | Trailing zero removed|

---

## 🛠️ Language

**C++**

---

## 🔗 Related Concepts

- Integer Manipulation
- Overflow Handling
- Modulo & Division

---

_An elegant problem that tests digit-wise processing and overflow awareness!_
