# Day 35 – Two Sum

## 🧩 Problem

**Problem:** [1. Two Sum](https://leetcode.com/problems/two-sum/)  
**Difficulty:** Easy

Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to the target.  
Assume each input has exactly one solution, and no element can be used twice.

---

## 💡 Approach

The problem is solved using a **HashMap** to store the numbers and their corresponding indices:
- Loop through the array.
- For every element:
  - Calculate the complement (`target - element`).
  - If complement exists in the map, return the pair.
  - Otherwise, store the current number and its index.
  
This reduces the time complexity to **O(n)**.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

---

## ✅ Sample Cases

| Input               | Target | Output  | Explanation                    |
|--------------------|--------|---------|--------------------------------|
| [2,7,11,15]        | 9      | [0,1]   | 2 + 7 = 9                      |
| [3,2,4]            | 6      | [1,2]   | 2 + 4 = 6                      |
| [3,3]              | 6      | [0,1]   | 3 + 3 = 6                      |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Hashing
- Arrays
- Two-Pointer Techniques (Alternative approach)

---

_This is one of the most asked interview questions — knowing this unlocks many similar array problems!_
