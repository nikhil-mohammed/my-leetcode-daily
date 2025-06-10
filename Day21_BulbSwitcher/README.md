# Day 21 – Bulb Switcher

## 🧩 Problem

**Problem:** [319. Bulb Switcher](https://leetcode.com/problems/bulb-switcher/)  
**Difficulty:** Medium

> There are n bulbs initially off. You toggle bulbs in rounds:
> - Round 1: Turn on all bulbs.
> - Round 2: Toggle every 2nd bulb.
> - Round 3: Toggle every 3rd bulb.
> - ...
> - Round n: Toggle only the nth bulb.
>
> Return how many bulbs remain on after n rounds.

---

## 💡 Approach

- Each bulb toggled once per divisor it has.
- Bulbs toggled an odd number of times remain on.
- Only **perfect squares** have an odd number of divisors.
- Result is count of perfect squares ≤ n → `floor(sqrt(n))`.

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** O(1) — Direct math calculation.  
- **Space Complexity:** O(1) — No extra space needed.

---

## ✅ Sample Cases

| Input | Output | Explanation                           |
|-------|--------|-------------------------------------|
| 3     | 1      | Only bulb 1 remains on.              |
| 0     | 0      | No bulbs to toggle.                  |
| 1     | 1      | Single bulb is on.                   |
| 16    | 4      | Perfect squares ≤16: 1,4,9,16 bulbs on. |
| 25    | 5      | Perfect squares ≤25: 1,4,9,16,25 bulbs on. |

---

## 🛠️ Language

Implemented in **C++**

---

## 🔗 Related Concepts

- Math Insight  
- Number Theory  
- Square Numbers  

---

_Simple math-based solution avoids simulation and works efficiently for large n!_
