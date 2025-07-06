# Day 47 – Valid Anagram

## 🧩 Problem

**Problem:** [242. Valid Anagram](https://leetcode.com/problems/valid-anagram/)  
**Difficulty:** Easy  

> Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

---

## 💡 Approach

To determine if two strings are anagrams:
- Check if their lengths match. If not, return false.
- Use a frequency array (`count[26]`) to track character counts:
  - For every character in `s`, increment its corresponding count.
  - For every character in `t`, decrement its corresponding count.
- If all values in `count` are zero, `t` is an anagram of `s`.

This avoids the need for sorting and gives a linear-time solution.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** `O(n)` — Single pass through both strings.
- **Space Complexity:** `O(1)` — Constant space (size 26 array).

---

## ✅ Test Cases

| s        | t        | Output |
|----------|----------|--------|
| "anagram"| "nagaram"| true   |
| "rat"    | "car"    | false  |
| "aacc"   | "ccac"   | false  |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Hashing
- Frequency Arrays
- String Manipulation

---

_Quick to solve, but an excellent test of string reasoning and frequency-based logic._
