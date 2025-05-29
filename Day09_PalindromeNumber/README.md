# Day 9 – Palindrome Number

## 🧩 Problem

**Problem:** [9. Palindrome Number](https://leetcode.com/problems/palindrome-number/)  
**Difficulty:** Easy

> Given an integer `x`, return `true` if `x` is a palindrome (reads the same backward and forward), else return `false`.

---

## 💡 Approach

We avoid converting the number to a string. Instead:

- Negative numbers are not palindromes.
- If a number ends in 0 but isn’t 0, it’s also not a palindrome.
- Reverse **half** of the number using math:
  - Pull digits off the back and push them onto `rev_int`.
  - Stop when `rev_int` becomes greater than or equal to `x`.
- Then compare `x` and `rev_int` (or `rev_int / 10` for odd lengths).

This avoids integer overflow and unnecessary computation.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** `O(log₁₀ n)` — We only process half the digits.
- **Space Complexity:** `O(1)` — No extra data structures used.

---

## ✅ Sample Cases

| Input | Output | Explanation                        |
|-------|--------|------------------------------------|
| 121   | true   | Same forward and backward          |
| -121  | false  | Negative numbers can't be palindrome |
| 10    | false  | Reverses to 01                     |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Math
- Reversing Numbers
- Edge Case Handling

---

_A little math goes a long way in solving problems cleanly and efficiently!_
