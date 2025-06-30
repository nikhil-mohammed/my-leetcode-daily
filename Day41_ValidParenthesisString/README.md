# Day 41 – Valid Parenthesis String

## 🧩 Problem

**Problem:** [678. Valid Parenthesis String](https://leetcode.com/problems/valid-parenthesis-string/)  
**Difficulty:** Medium  

> Given a string `s` containing '(', ')', and '*', determine if it is a valid parenthesis string.  
> `*` can act as `(` or `)` or an empty string.

---

## 💡 Approach

We track the possible range of open brackets using two variables:
- `leftMin`: the **minimum** number of unmatched '('
- `leftMax`: the **maximum** number of unmatched '('

As we traverse the string:
- For `'('`, increment both.
- For `')'`, decrement both.
- For `'*'`, treat it as both '(' and ')' — decrement `leftMin`, increment `leftMax`.

Edge Cases:
- If `leftMax < 0`, too many ')' — invalid.
- Clamp `leftMin` to zero to avoid going negative.

Finally, the string is valid if `leftMin == 0` at the end.

---

## ⏱️ Time & Space Complexity

- **Time:** `O(n)`
- **Space:** `O(1)`

---

## ✅ Test Cases

| Input     | Output | Explanation                        |
|-----------|--------|------------------------------------|
| `"()"`    | true   | Balanced parentheses               |
| `"(*)"`   | true   | `*` acts as empty or `()`          |
| `"(*))"`  | true   | `*` acts as `(`                    |
| `"(((*)"` | false  | Too many open without closing      |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Stack Simulation
- Range Tracking
- Greedy Approach

---

_A clever problem that goes beyond simple stacks — showing the power of range-based greedy thinking._
