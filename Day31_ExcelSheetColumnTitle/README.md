# Day 31 – Excel Sheet Column Title

## 🧩 Problem

**Problem:** [168. Excel Sheet Column Title](https://leetcode.com/problems/excel-sheet-column-title/)  
**Difficulty:** Easy

> Given an integer `columnNumber`, return its corresponding column title as appears in an Excel sheet.

---

## 💡 Approach

This is a **base conversion problem** with a slight twist because Excel columns are **1-indexed** rather than 0-indexed:

- Subtract 1 to adjust for 0-based calculations.
- Repeatedly take modulo 26 to get the current character.
- Append this character to the result string.
- Divide the number by 26 and repeat.
- Since characters are added in reverse order, the final result is reversed.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** `O(log columnNumber)` — because we divide `columnNumber` by 26 in every step.
- **Space Complexity:** `O(log columnNumber)` — for storing the result string.

---

## ✅ Sample Cases

| Input            | Output | Explanation                |
|-----------------|--------|----------------------------|
| `1`             | "A"    | 1 corresponds to 'A'        |
| `28`            | "AB"   | 28 = 1\*26 + 2 = 'AB'      |
| `701`           | "ZY"   | 701 = 26\*26 + 25 = 'ZY'   |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Base Conversion
- String Manipulation
- Math

---

_Excel’s column logic — just a clever twist on base-26 numbering!_
