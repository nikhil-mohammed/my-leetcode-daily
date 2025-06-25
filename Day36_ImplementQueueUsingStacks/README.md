# Day 36 – Implement Queue using Stacks

## 🧩 Problem

**Problem:** [232. Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/)  
**Difficulty:** Easy  

> Implement a first-in-first-out (FIFO) queue using only two stacks.  
> Support standard queue operations: `push`, `pop`, `peek`, and `empty`.

---

## 💡 Approach

To simulate a queue using stacks, we maintain **two stacks**:
- `s1` for enqueue operations.
- `s2` for dequeue operations.

✅ The trick:
- When popping or peeking, if `s2` is empty, we transfer all elements from `s1` to `s2` — this reverses the order and gives queue-like behavior.
- All operations are efficient due to amortized constant time for transfers.

This allows us to mimic queue behavior using stack operations only.

---

## ⏱️ Time & Space Complexity

| Operation | Time Complexity | Space Complexity |
|-----------|------------------|------------------|
| push      | O(1)             | O(n)             |
| pop       | Amortized O(1)   | O(n)             |
| peek      | Amortized O(1)   | O(n)             |
| empty     | O(1)             | O(1)             |

---

## ✅ Sample Cases

| Operation        | Output | Explanation                              |
|------------------|--------|------------------------------------------|
| push(1), push(2) | –      | Queue becomes [1, 2]                      |
| peek()           | 1      | Front element is 1                        |
| pop()            | 1      | Removes 1, queue becomes [2]             |
| empty()          | false  | Queue still has 2 in it                  |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Stack
- Queue
- Amortized Time Complexity
- Data Structure Design

---

_A clever way to repurpose stacks and understand how data structure fundamentals interact!_
