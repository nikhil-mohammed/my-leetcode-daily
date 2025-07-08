# Day 49 – Is Subsequence

## 🧩 Problem

**Problem:** [392. Is Subsequence](https://leetcode.com/problems/is-subsequence/)  
**Difficulty:** Easy  

> Given two strings `s` and `t`, return true if `s` is a subsequence of `t`.  
> A subsequence is a string formed by deleting characters from another string **without changing the relative order**.

---

## 💡 Approach

Instead of the basic two-pointer method, this solution uses **preprocessing + greedy jumps**:

- We create a `store` array where `store[i][ch]` gives us the **next occurrence** of character `ch` in `t` starting from index `i`.
- We process `t` in reverse to fill this array.
- Then, we iterate over `s` and at each step, we jump to the next position where the current character appears.

This allows us to quickly determine if we can sequentially match all characters in `s` while traversing `t`.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** `O(n + m)`  
- **Space Complexity:** `O(m * 26)`  
Where `n = s.length()` and `m = t.length()`.

---

## ✅ Test Cases

| s     | t         | Output | Explanation                                |
|-------|-----------|--------|--------------------------------------------|
| "abc" | "ahbgdc"  | true   | All characters in order in `t`             |
| "axc" | "ahbgdc"  | false  | `x` is not present in `t`                  |
| ""    | "anything"| true   | Empty string is always a subsequence       |
| "a"   | ""        | false  | Can't find any characters in empty `t`     |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Subsequence Matching
- String Traversal
- Greedy
- Preprocessing for Fast Lookup

---

_This one’s a perfect example of how preprocessing can give brute-force ideas a serious performance boost._
