# Day 37 – Valid Parentheses

## 🧩 Problem

**Problem:** [20. Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)  
**Difficulty:** Easy

> Given a string with just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

A string is considered valid if:
- Every open bracket has a corresponding closing bracket.
- Brackets are closed in the correct order and type.

---

## 💡 Approach

Use a **stack** to track open brackets.  
As you iterate through the string:
- If the character is a closing bracket:
  - Check if the stack top matches the expected opening bracket.
  - If yes, pop it; otherwise, return false.
- If it’s an opening bracket, push to the stack.

Finally, the string is valid **only** if the stack is empty (i.e., all brackets are properly closed).

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** `O(n)` – We process each character once.
- **Space Complexity:** `O(n)` – Stack stores at most `n` characters.

---

## ✅ Sample Cases

| Input     | Output | Explanation                            |
|-----------|--------|----------------------------------------|
| "()"      | true   | Balanced pair                          |
| "()[]{}"  | true   | All valid and correctly ordered        |
| "(]"      | false  | Wrong closing type                     |
| "([])"    | true   | Nested and ordered correctly           |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Stack
- Hash Map
- String Parsing

---

_A classic stack problem that helps reinforce bracket balancing logic._
