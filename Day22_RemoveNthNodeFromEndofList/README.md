# Day 22 – Remove Nth Node From End of List

## 🧩 Problem

**Problem:** [19. Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)  
**Difficulty:** Medium

> Given the head of a singly linked list, remove the nth node from the end of the list and return its head.

---

## 💡 Approach

- Introduced a **dummy node** to simplify edge cases (like deleting the head).
- Used the **two-pointer technique**:
  - Advance `right` pointer by `n` steps.
  - Move both pointers (`left`, `right`) until `right` reaches the end.
  - The `left` pointer will be just before the node to remove.
- Adjust the `next` pointer to skip the target node.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** O(n) — Single pass through the list.
- **Space Complexity:** O(1) — No extra space used apart from pointers.

---

## ✅ Sample Cases

| Input          | n | Output     | Explanation                      |
|---------------|---|------------|----------------------------------|
| [1,2,3,4,5]   | 2 | [1,2,3,5] | Removed the 2nd node from end (4).|
| [1]           | 1 | []         | Removed the only node.           |
| [1,2]         | 1 | [1]        | Removed the last node (2).       |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Linked List Manipulation
- Two Pointer Technique
- Edge Case Handling

---

_A clean two-pointer approach to tackle linked list problems efficiently!_