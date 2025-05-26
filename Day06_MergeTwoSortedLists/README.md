# Day 6 – Merge Two Sorted Lists

## 🧩 Problem

**Problem:** [21. Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)  
**Difficulty:** Easy

> You are given the heads of two sorted linked lists `list1` and `list2`. Merge the two lists in a sorted manner and return the head of the merged list.

---

## 💡 Approach

We use a **dummy node** to simplify the process of merging the two lists:

- Initialize a dummy node and a pointer `node` that helps build the new list.
- Traverse both input lists:
  - At each step, compare the current nodes.
  - Attach the smaller node to `node->next`, then move the corresponding pointer.
- After the loop, if any list remains, attach it to the end.

This in-place solution avoids extra memory usage.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** `O(n + m)` — We traverse both lists once.
- **Space Complexity:** `O(1)` — No extra space used (aside from dummy node).

---

## ✅ Sample Cases

| Input                  | Output         | Explanation                      |
|------------------------|----------------|----------------------------------|
| `[1,2,4]`, `[1,3,4]`   | `[1,1,2,3,4,4]`| Elements merged in sorted order |
| `[]`, `[]`             | `[]`           | Both lists empty                 |
| `[]`, `[0]`            | `[0]`          | Only one list has elements       |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Linked List
- Two Pointer Technique
- Dummy Nodes

---

_A clean merge with a dummy head saves you a ton of edge-case headaches!_
