# Day 17 – Excel Sheet Column Number

## 🧩 Problem

**Problem:** [171. Excel Sheet Column Number](https://leetcode.com/problems/excel-sheet-column-number/)  
**Difficulty:** Easy

> Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number.  
>  
> Examples:  
> A → 1  
> AB → 28  
> ZY → 701  

---

## 💡 Approach

This is essentially a **base-26 conversion** using uppercase English letters.

- Start from the leftmost character.
- For each character:
  - Convert to numerical value using `A = 1`, `B = 2`, ..., `Z = 26`.
  - Multiply the result so far by 26 and add the current value.
- Repeat this until all characters are processed.

It mirrors how we convert numbers from other bases (like binary or hexadecimal).

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** O(n) — Traverse each character in the string once.
- **Space Complexity:** O(1) — No extra data structures needed.

---

## ✅ Sample Cases

| Input    | Output | Explanation                          |
|----------|--------|--------------------------------------|
| "A"      | 1      | A = 1                                |
| "AB"     | 28     | (1 × 26) + 2                         |
| "ZY"     | 701    | (26 × 26) + 25                       |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Base Conversion  
- String Manipulation  
- ASCII Arithmetic

---

_What looks like Excel magic is actually just smart base-26 math!_
