# Day 26 – Remove Duplicates from Sorted List II

## 🧩 Problem

**Problem:** [82. Remove Duplicates from Sorted List II](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/)  
**Difficulty:** Medium

> Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.

---

## 💡 Approach

We use a **dummy node technique** to simplify handling edge cases.  
- A `dummy` node points to the list head.
- A `prev` pointer keeps track of the last node known to be unique.
- We traverse the list:
  - If a sequence of duplicate values is found, skip them all.
  - Otherwise, move `prev` forward.
  
This approach ensures that **all duplicates are skipped entirely**, not just reduced to one copy.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** O(n) — Each node is visited once.
- **Space Complexity:** O(1) — No extra space needed.

---

## ✅ Sample Cases

| Input               | Output   | Explanation                                 |
|--------------------|----------|---------------------------------------------|
| [1,2,3,3,4,4,5]    | [1,2,5] | All 3's and 4's are duplicates and removed. |
| [1,1,1,2,3]        | [2,3]   | All 1's are duplicates and removed.         |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Linked List
- Two Pointers
- Dummy Node Technique

---

_Effective handling of edge cases made easy using a dummy node!_
