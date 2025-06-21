# Day 32 – Delete Node in a Linked List

## 🧩 Problem

**Problem:** [237. Delete Node in a Linked List](https://leetcode.com/problems/delete-node-in-a-linked-list/)  
**Difficulty:** Medium  

> Given a node to delete in a singly linked list (without head access), remove it such that the rest of the list remains intact.

---

## 💡 Approach

Normally, to delete a node, you need access to its previous node — but here we only have access to the node itself.

✅ The trick:
- Copy the value of the next node into the current node.
- Redirect the current node’s next pointer to skip the next node.
- Delete the next node.

This achieves the effect of deleting the given node without needing head access.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** `O(1)` — Only constant time operations.
- **Space Complexity:** `O(1)` — No extra space used.

---

## ✅ Sample Cases

| Input                 | Output     | Explanation                    |
|----------------------|-----------|--------------------------------|
| head = [4,5,1,9], node = 5 | [4,1,9] | 5 is removed by copying 1 into it |
| head = [4,5,1,9], node = 1 | [4,5,9] | 1 is removed by copying 9 into it |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Linked List
- Pointer Manipulation
- In-place Modification

---

_A creative problem that shows the power of direct pointer manipulation!_
