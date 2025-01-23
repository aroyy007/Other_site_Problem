# 1833. Maximum Ice Cream Bars

## Problem Description

It is a hot summer day, and a boy wants to buy some ice cream bars. You are given an array `costs` of length \( n \), where `costs[i]` is the price of the \( i \)-th ice cream bar in coins. The boy initially has `coins` coins to spend and wants to buy as many ice cream bars as possible.

### Objective:
Return the **maximum number of ice cream bars** the boy can buy with `coins`.

**Note:**  
The boy can buy the ice cream bars in **any order**.

---

## Examples

### Example 1:
**Input:**  
```plaintext
costs = [1, 3, 2, 4, 1], coins = 7
```

**Output:**  
```plaintext
4
```

**Explanation:**  
The boy can buy ice cream bars at indices 0, 1, 2, and 4, for a total price of ` 1 + 3 + 2 + 1 = 7`.

---

### Example 2:
**Input:**  
```plaintext
costs = [10, 6, 8, 7, 7, 8], coins = 5
```

**Output:**  
```plaintext
0
```

**Explanation:**  
The boy cannot afford any of the ice cream bars.

---

### Example 3:
**Input:**  
```plaintext
costs = [1, 6, 3, 1, 2, 5], coins = 20
```

**Output:**  
```plaintext
6
```

**Explanation:**  
The boy can buy all the ice cream bars for a total price of ` 1 + 6 + 3 + 1 + 2 + 5 = 18 `.

---

## Constraints

- `costs.length == n`
- `1 <= n <= 10^5`
- `1 <= costs[i] <= 10^5`
- `1 <= coins <= 10^8`

---

## Solution Explanation

### Approach:
1. **Sort the Array**:  
   Sort the `costs` array in ascending order. This allows us to prioritize the cheaper ice cream bars first.
2. **Iterate Through the Sorted Costs**:  
   Deduct the cost of each bar from `coins` until the boy can no longer afford an ice cream bar.
3. **Count the Bars**:  
   Keep track of the number of bars the boy can afford.

---

### Algorithm:
1. Sort the array `costs`.
2. Initialize `c = 0` to count the number of bars.
3. Loop through the sorted `costs`:
   - If `coins >= costs[i]`, deduct `costs[i]` from `coins` and increment `c`.
   - If `coins < costs[i]`, stop the loop.
4. Return `c`.

---

### Complexity Analysis:
- **Time Complexity**:  
  - Sorting: `O(n \log n)`  
  - Iteration: `O(n)`  
  - Overall: `O(n \log n)`
- **Space Complexity**:  
  - `O(1)` (in-place sorting).

---
