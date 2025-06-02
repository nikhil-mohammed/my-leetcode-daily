# Day 13 – Happy Number

## 🧩 Problem

**Problem:** [202. Happy Number](https://leetcode.com/problems/happy-number/)  
**Difficulty:** Easy

> A happy number is a number where repeatedly replacing it by the sum of squares of its digits eventually leads to 1. If a cycle forms that doesn’t include 1, it's not a happy number.

---

## 💡 Approach

This is a classic **cycle detection** problem, best handled with **Floyd’s Tortoise and Hare algorithm**:
- Use two pointers: `slow` (1 move) and `fast` (2 moves).
- If they meet again (and it’s not 1), we’ve entered a cycle ⇒ not happy.
- If `fast` reaches 1, it's a happy number.

A helper function computes the **sum of squares** of digits.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** O(log n) per transformation, with few iterations due to digit contraction.
- **Space Complexity:** O(1), no extra data structures needed.

---

## ✅ Sample Cases

| Input | Output | Explanation |
|-------|--------|-------------|
| 19    | true   | 19 → 82 → 68 → 100 → 1 |
| 2     | false  | Cycles through numbers, never reaches 1 |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Cycle Detection
- Hashing (Alternative Approach)
- Math & Digit Manipulation

---

_Using number theory + cycle detection together makes for an elegant solution!_
