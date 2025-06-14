# Day 25 – Count Odd Numbers in an Interval Range

## 🧩 Problem

**Problem:** [1523. Count Odd Numbers in an Interval Range](https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/)  
**Difficulty:** Easy  

> Given two non-negative integers `low` and `high`. Return the count of odd numbers between `low` and `high` (inclusive).

---

## 💡 Approach

- Calculate the **total numbers in the range** as `high - low + 1`.
- Half of these numbers are typically odd.
- But if the total count is **odd** and the starting number `low` is also odd, then add 1 to the result.

✔️ No loops, just arithmetic.

---

## ⏱️ Time & Space Complexity

| Complexity | Value |
|------------|-------|
| **Time**   | O(1)  |
| **Space**  | O(1)  |

---

## ✅ Sample Cases

| Input            | Output | Explanation              |
|-----------------|--------|--------------------------|
| low = 3, high = 7  | 3      | Odd numbers: [3,5,7]    |
| low = 8, high = 10 | 1      | Odd number: [9]        |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Mathematics
- Range Counting
- Parity Checking

---

_A simple problem showcasing the beauty of arithmetic over iteration._
