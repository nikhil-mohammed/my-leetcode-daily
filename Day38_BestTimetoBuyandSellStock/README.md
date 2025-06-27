# Day 38 – Best Time to Buy and Sell Stock

## 🧩 Problem

**Problem:** [121. Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)  
**Difficulty:** Easy  

> You’re given an array where `prices[i]` is the price of a stock on the `i-th` day. Find the maximum profit you can achieve by choosing a day to buy and a later day to sell.

---

## 💡 Approach

We use a **greedy algorithm** that tracks the **lowest price** so far and computes the **maximum profit** at each step.

✅ Strategy:
- Initialize `minBuy` as the first price
- Loop through the array:
  - Update `maxProfit` with `price - minBuy`
  - Update `minBuy` if a lower price is found

This avoids nested loops and keeps it efficient with just a single pass.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** `O(n)` — Single traversal of the prices array
- **Space Complexity:** `O(1)` — Constant space used

---

## ✅ Sample Cases

| Prices             | Max Profit | Explanation                                |
|--------------------|-------------|--------------------------------------------|
| [7,1,5,3,6,4]       | 5           | Buy at 1, sell at 6                         |
| [7,6,4,3,1]         | 0           | No profit opportunity                      |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Greedy Algorithms
- One-Pass Optimization
- Dynamic Min Tracking

---

_A classic problem to test your ability to optimize under constraints._
