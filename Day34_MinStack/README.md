# Day 34 – Min Stack

## 🧩 Problem

**Problem:** [155. Min Stack](https://leetcode.com/problems/min-stack/)  
**Difficulty:** Medium

Design a stack that supports push, pop, top, and retrieving the minimum element in **constant time O(1)**.

---

## 💡 Approach

To achieve O(1) for all operations:
- Use a **single stack** that stores the difference between each value and the current minimum.
- Maintain a separate variable `minElement` to keep track of the minimum.
- For `push`: If inserting a new min, push the difference and update `minElement`.
- For `pop`: If popping an encoded min, update `minElement`.
- For `top`: Decode based on the stored difference.
- For `getMin`: Directly return `minElement`.

This is an elegant way to track both values and minimums without extra space complexity.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** O(1) for all operations
- **Space Complexity:** O(n) for the stack

---

## ✅ Sample Cases

| Operations                            | Output |
|--------------------------------------|--------|
| MinStack minStack;                    | null   |
| minStack.push(-2);                    | null   |
| minStack.push(0);                     | null   |
| minStack.push(-3);                    | null   |
| minStack.getMin();                    | -3     |
| minStack.pop();                       | null   |
| minStack.top();                       | 0      |
| minStack.getMin();                    | -2     |

---

## 🛠️ Language

**C++**

---

## 🔗 Related Concepts

- Stack
- Design Problems
- Encoding/Decoding Tricks

---

_Elegant handling of stack with minimum tracking and no extra space!_
