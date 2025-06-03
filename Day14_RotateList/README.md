# Day 14 – Rotate List

## 🧩 Problem

**Problem:** [61. Rotate List](https://leetcode.com/problems/rotate-list/)  
**Difficulty:** Medium

> Given the head of a linked list and an integer `k`, rotate the list to the right by `k` places. Rotating means moving the last `k` nodes to the front.

---

## 💡 Approach

This problem is best approached by:
- **Finding the length** of the list (`n`) to handle cases where `k >= n`.
- **Creating a circular list** by connecting the last node to the head.
- **Breaking the circle** after `n - k % n` steps to get the new head.

This ensures an efficient rotation in linear time with constant space.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** O(n) — One pass to find length, another to break the circle.
- **Space Complexity:** O(1) — No extra memory used beyond pointers.

---

## ✅ Sample Cases

| Input       | k | Output       | Explanation                    |
|-------------|---|--------------|--------------------------------|
| [1,2,3,4,5] | 2 | [4,5,1,2,3]   | Rotate last 2 to front         |
| [0,1,2]     | 4 | [2,0,1]       | Effective rotation is by 1     |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Linked List Manipulation  
- Circular List Technique  
- Modular Arithmetic

---

_Rotating a list efficiently requires treating it like a circle and breaking it smartly!_
