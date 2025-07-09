# Day 50 – Append Characters to String to Make Subsequence

## 🧩 Problem

**Problem:** [2486. Append Characters to String to Make Subsequence](https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/)  
**Difficulty:** Medium  

> Given two strings `s` and `t`, return the **minimum number of characters** that need to be appended to the end of `s` so that `t` becomes a subsequence of `s`.

---

## 💡 Approach

We want to match as much of `t` inside `s` as possible — then **append the leftover** characters of `t`.

To do this efficiently:
- We preprocess `s` to create a `store[i][c]` table, where `store[i][c]` gives us the index of the next occurrence of character `c` after index `i`.
- Then we iterate through `t`, jumping through `s` greedily using the table to match characters.

The answer is `t.length() - matched`, where `matched` is the number of characters we managed to align from `t` inside `s`.

---

## ⏱️ Time & Space Complexity

- **Time:** `O(n + m)`  
- **Space:** `O(n * 26)`  
Where `n = s.length()` and `m = t.length()`.

---

## ✅ Test Cases

| s         | t       | Output | Explanation                                      |
|-----------|---------|--------|--------------------------------------------------|
| "coaching"| "coding"| 4      | Only `c` matched; rest ("oding") must be appended |
| "abcde"   | "a"     | 0      | Already a subsequence                            |
| "z"       | "abcde" | 5      | No matches at all — need to append full `t`      |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Greedy Matching
- String Traversal
- Preprocessing for Fast Lookup
- Subsequence Checking

---

_A great mix of greedy logic and efficient indexing — and a clean way to handle large input sizes._  
