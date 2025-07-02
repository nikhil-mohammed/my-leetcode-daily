# Day 43 – Minimum Remove to Make Valid Parentheses

## 🧩 Problem

**Problem:** [1249. Minimum Remove to Make Valid Parentheses](https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/)  
**Difficulty:** Medium  

> Given a string containing `(`, `)`, and lowercase letters, remove the **minimum number** of parentheses to make it valid.

---

## 💡 Approach

The idea is to **track unbalanced parentheses** and remove them on the go.

### Step-by-step:
1. **Count total `)`** to know how many are available.
2. Traverse the string once:
   - Skip `(` if we don’t have a matching `)`.
   - Skip `)` if there’s no matching `(` (tracked using a counter).
   - Push valid characters to result string.

This greedy single-pass cleanup ensures minimal and valid removal.

---

## ⏱️ Time & Space Complexity

- **Time:** `O(n)` – One pass through the string
- **Space:** `O(n)` – Result string in worst case

---

## ✅ Test Cases

| Input             | Output         | Notes                              |
|------------------|----------------|-------------------------------------|
| `"lee(t(c)o)de)"`| `"lee(t(c)o)de"` | Last `)` removed                    |
| `"a)b(c)d"`       | `"ab(c)d"`      | Invalid `)` removed early on        |
| `"))(("`          | `""`            | All characters removed              |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Stack Simulation
- Greedy
- String Manipulation

---

_A practical challenge that’s all about surgical string editing using logic instead of brute force._
