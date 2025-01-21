# Average Waiting Time - LeetCode Solution

## Problem Description

You are given a list of customers, where each customer is represented as a 2D vector `customers[i] = [arrivalTime, timeToPrepare]`:

1. `arrivalTime`: The time at which the customer arrives.
2. `timeToPrepare`: The time required to prepare the customer's order.

The restaurant can only serve one customer at a time, and it starts preparing the current customer's order once the previous order is completed or when the customer arrives, whichever is later.

The **waiting time** for a customer is defined as the difference between:
- The time their order is completed, and  
- Their arrival time.  

Return the **average waiting time** for all customers, rounded to six decimal places.

---

### Example 1:

**Input:**
```plaintext
customers = [
    [1, 2],
    [2, 5],
    [4, 3]
]
```

**Output:**
```plaintext
5.000000
```

**Explanation:**
1. The first customer arrives at time 1 and their order is completed at time 3. Waiting time = \(3 - 1 = 2\).  
2. The second customer arrives at time 2, and their order starts at time 3 (after the first order is completed). It finishes at time 8. Waiting time = \(8 - 2 = 6\).  
3. The third customer arrives at time 4, and their order starts at time 8. It finishes at time 11. Waiting time = \(11 - 4 = 7\).  

Average waiting time = \((2 + 6 + 7) / 3 = 5.000000\).

---

### Constraints:

- `1 <= customers.length <= 10^5`
- `1 <= arrivalTime, timeToPrepare <= 10^4`

---

## Solution Explanation

The solution calculates the average waiting time using a **greedy approach**:

1. Use a variable `currentTime` to track when the restaurant is available to serve the next customer.
2. For each customer:
   - If the customer arrives after the current time, adjust the current time to the customer's arrival time.
   - Add the time required to prepare the order to `currentTime`.
   - Calculate the waiting time for this customer and add it to the total waiting time.
3. Divide the total waiting time by the number of customers to get the average.

### Time Complexity:
- **O(N)**: Process each customer in a single loop.

### Space Complexity:
- **O(1)**: Only constant extra space is used.

---
