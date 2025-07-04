# Day 45 – Score of a String

## 🧩 Problem

**Problem:** [3110. Score of a String](https://leetcode.com/problems/score-of-a-string/)  
**Difficulty:** Easy  

> Given a string, return the sum of absolute differences of ASCII values between every adjacent character.

---

## 💡 Approach

We iterate through each pair of adjacent characters and:
- Convert each character to its ASCII value
- Take the absolute difference between them
- Sum them up

This results in the total "score" of the string.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** `O(n)` — We visit each character once.
- **Space Complexity:** `O(1)` — Just a counter variable.

---

## ✅ Test Cases

| Input    | Output | Explanation                              |
|----------|--------|------------------------------------------|
| `"hello"` | 13     | ASCII differences = 3 + 7 + 0 + 3        |
| `"zaz"`   | 50     | ASCII differences = 25 + 25              |
| `"abc"`   | 2      | ASCII differences = 1 + 1                |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- ASCII Manipulation
- String Traversal
- Absolute Difference

---

_A great example of how basic character encoding knowledge can be powerful!_
