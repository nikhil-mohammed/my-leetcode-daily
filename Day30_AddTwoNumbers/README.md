# Day 30 – Add Two Numbers

## 🧩 Problem

**Problem:** [2. Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)  
**Difficulty:** Medium  

> You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order. Return the sum as a linked list.

---

## 💡 Approach

This is a **Linked List Summation** problem:

- Create a dummy node to simplify result list creation.
- Use a carry variable to handle sums exceeding 9.
- Traverse both lists:
  - Extract current values (`l1` or `l2`).
  - Sum them along with carry.
  - Add the unit place digit to the new node.
  - Carry over the rest.
- Continue until all nodes and carry are processed.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** O(max(m, n)) — We process both lists once.
- **Space Complexity:** O(max(m, n)) — The result list may have an extra node if carry remains.

---

## ✅ Sample Cases

| Input | Output | Explanation |
|-------|--------|-------------|
| [2,4,3], [5,6,4] | [7,0,8] | 342 + 465 = 807 |
| [0], [0] | [0] | Both numbers zero |
| [9,9,9,9,9,9,9], [9,9,9,9] | [8,9,9,9,0,0,0,1] | Carry causes extra node |

---

## 🛠️ Language

**C++**

---

## 🔗 Related Concepts

- Linked List
- Carry Handling
- Elementary Addition Logic

---

_Adding numbers the way we do on paper – node by node, digit by digit!_
