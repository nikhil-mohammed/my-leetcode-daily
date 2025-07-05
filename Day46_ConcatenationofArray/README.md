# Day 46 – Concatenation of Array

## 🧩 Problem

**Problem:** [1929. Concatenation of Array](https://leetcode.com/problems/concatenation-of-array/)  
**Difficulty:** Easy  

> Given an array `nums`, return a new array `ans` such that `ans = nums + nums`.

---

## 💡 Approach

This problem is a simple matter of:
- Initializing a result array of size `2 * n`
- Copying the values of `nums` into the first `n` and next `n` positions of `ans`

It can be done in a single loop.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** `O(n)` — Single pass through the array
- **Space Complexity:** `O(n)` — For the new array of size `2n`

---

## ✅ Test Cases

| Input         | Output            |
|---------------|-------------------|
| `[1,2,1]`     | `[1,2,1,1,2,1]`   |
| `[1,3,2,1]`   | `[1,3,2,1,1,3,2,1]`|

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Array Manipulation
- Index Mapping
- Linear Time Operations

---

_A good warm-up to get comfortable with arrays and iteration._
