# Day 8 – Linked List Cycle

## 🧩 Problem

**Problem:** [141. Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)  
**Difficulty:** Easy

> Given the `head` of a linked list, return `true` if there is a cycle in the linked list. Otherwise, return `false`.  
> A cycle exists if a node can be reached again by continuously following `next`.

---

## 💡 Approach

We use the **Floyd’s Cycle Detection Algorithm (Tortoise and Hare)**:

- Initialize two pointers: `slow` and `fast`.
- Move `slow` one step and `fast` two steps at a time.
- If there is a cycle, the two will eventually meet.
- If `fast` reaches the end (`nullptr`), then no cycle exists.

This algorithm avoids extra memory usage and is optimal for linked lists.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** `O(n)` — In the worst case, we traverse all nodes.
- **Space Complexity:** `O(1)` — No extra data structures used.

---

## ✅ Sample Cases

| Input              | Output | Explanation                                |
|-------------------|--------|--------------------------------------------|
| `[3,2,0,-4]`, pos=1| `true` | Cycle exists connecting tail to node at 1  |
| `[1,2]`, pos=0     | `true` | Tail connects to the head node             |
| `[1]`, pos=-1      | `false`| Single node with no cycle                  |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Linked List
- Two Pointer Technique
- Cycle Detection

---

_A clever trick with two pointers avoids the need for extra space!_
