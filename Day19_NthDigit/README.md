# Day 19 – Nth Digit

## 🧩 Problem

**Problem:** [400. Nth Digit](https://leetcode.com/problems/nth-digit/)  
**Difficulty:** Medium

> Given an integer `n`, return the nth digit in the infinite integer sequence:  
> `123456789101112...`

---

## 💡 Approach

To avoid generating the full sequence:
- We analyze how many digits there are in:
  - 1-digit numbers: 9 (1–9)
  - 2-digit numbers: 90 × 2
  - 3-digit numbers: 900 × 3
  - and so on...
- Subtract until `n` falls into a digit group.
- Calculate which number and which digit in that number is the answer.

We then convert that number to a string and fetch the correct character.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** O(log n) — We loop over digit groups (1-digit, 2-digit, etc.).
- **Space Complexity:** O(1) — Except for string conversion.

---

## ✅ Sample Cases

| Input | Output | Explanation                          |
|-------|--------|--------------------------------------|
| 3     | 3      | 3rd digit is 3                       |
| 11    | 0      | 11th digit is the '0' in number 10   |
| 15    | 2      | 15th digit is '2' in number 12       |
| 1000  | 3      | 1000th digit in the sequence is 3    |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Digit Arithmetic  
- Math-Based Indexing  
- Simulation via Number Groups

---

_Math saves the day again! Elegant, optimal, and precise._
