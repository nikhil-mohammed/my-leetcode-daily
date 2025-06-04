# Day 15 – Plus One

## 🧩 Problem

**Problem:** [66. Plus One](https://leetcode.com/problems/plus-one/)  
**Difficulty:** Easy

> You are given a large number represented as an array of digits (most significant digit first). Increment it by one and return the resulting array. The input has no leading zeroes.

---

## 💡 Approach

This problem is best handled **digit by digit**, simulating elementary addition:
- Start from the **least significant digit** (end of the array) and add 1.
- If the sum becomes 10, carry over 1 and continue.
- If needed, **add a new digit** at the end (e.g. from `[9,9]` to `[1,0,0]`).
- The array is reversed at the start to make addition from LSB easier, and reversed again at the end.

This method ensures a clean and simple implementation.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** O(n) — Traverse the digits once.
- **Space Complexity:** O(1) — In-place modification (ignoring result storage).

---

## ✅ Sample Cases

| Input        | Output      | Explanation                        |
|--------------|-------------|------------------------------------|
| [1,2,3]      | [1,2,4]     | 123 + 1 = 124                      |
| [4,3,2,1]    | [4,3,2,2]   | 4321 + 1 = 4322                    |
| [9]          | [1,0]       | 9 + 1 = 10, extra digit needed     |
| [9,9]        | [1,0,0]     | 99 + 1 = 100                       |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Array Manipulation  
- Carry Propagation  
- Elementary Math Simulation

---

_Adding one seems simple, but handling carry and edge cases makes it a classic interview problem!_
