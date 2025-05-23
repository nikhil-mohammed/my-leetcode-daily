# Day 3 – Missing Number

## 🧩 Problem

**Problem:** [268. Missing Number](https://leetcode.com/problems/missing-number/)  
**Difficulty:** Easy

> Given an array `nums` containing `n` distinct numbers in the range `[0, n]`, return the only number in the range that is missing from the array.

---

## 💡 Approach

We leverage a simple mathematical insight:

- The expected sum of numbers from `0` to `n` is `n * (n + 1) / 2`.
- But instead of computing the sum directly, we iterate:
  - Start with `ans = n`.
  - For each index `i`, do `ans += i - nums[i]`.
- This cancels out all matched indices and values, leaving the missing one.

This avoids overflow and doesn't require extra space — both elegant and efficient.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** `O(n)` — Single pass through the array.
- **Space Complexity:** `O(1)` — No extra space used.

---

## ✅ Sample Cases

| Input                          | Output | Explanation                            |
|--------------------------------|--------|----------------------------------------|
| `[3, 0, 1]`                    | `2`    | 2 is missing from `[0, 1, 2, 3]`        |
| `[0, 1]`                       | `2`    | 2 is missing from `[0, 1, 2]`           |
| `[9,6,4,2,3,5,7,0,1]`          | `8`    | 8 is the only missing number            |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Math
- Array Manipulation
- Index-based Logic

---

_A deceptively simple problem that rewards clean logic over brute force. The constant space trick is especially elegant._
