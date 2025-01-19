# Minimum Difference Between Largest and Smallest Value in Three Moves

## Problem Description

You are given an integer array `nums`. In one move, you can choose one element of `nums` and change it to any value. The task is to determine the minimum difference between the largest and smallest values of `nums` after performing at most three moves.

### Constraints
- \( 1 \leq \text{nums.length} \leq 10^5 \)
- \( -10^9 \leq 	ext{nums}[i] \leq 10^9 \)

---

## Examples

### Example 1
**Input:**
```plaintext
nums = [5,3,2,4]
```
**Output:**
```plaintext
0
```
**Explanation:**
1. Change 2 to 3: `nums` becomes [5,3,3,4].
2. Change 4 to 3: `nums` becomes [5,3,3,3].
3. Change 5 to 3: `nums` becomes [3,3,3,3].
   - Difference = 3 - 3 = 0.

---

### Example 2
**Input:**
```plaintext
nums = [1,5,0,10,14]
```
**Output:**
```plaintext
1
```
**Explanation:**
1. Change 5 to 0: `nums` becomes [1,0,0,10,14].
2. Change 10 to 0: `nums` becomes [1,0,0,0,14].
3. Change 14 to 1: `nums` becomes [1,0,0,0,1].
   - Difference = 1 - 0 = 1.

---

### Example 3
**Input:**
```plaintext
nums = [3,100,20]
```
**Output:**
```plaintext
0
```
**Explanation:**
1. Change 100 to 7: `nums` becomes [3,7,20].
2. Change 20 to 7: `nums` becomes [3,7,7].
3. Change 3 to 7: `nums` becomes [7,7,7].
   - Difference = 7 - 7 = 0.

---

## Solution

### Approach
1. If the size of `nums` is less than or equal to 4, the result is `0` because all elements can be made equal within three moves.
2. Sort the array to arrange elements in non-decreasing order.
3. Consider the four possible scenarios to minimize the difference between the largest and smallest values:
   - Remove the three smallest elements.
   - Remove the two smallest elements and the largest element.
   - Remove the two largest elements and the smallest element.
   - Remove the three largest elements.
4. Compute the differences in each scenario and return the minimum.

## Complexity Analysis

### Time Complexity
- **O(n \log n):** Sorting the array dominates the runtime.

### Space Complexity
- **O(1):** Sorting is done in place, and no additional data structures are used.

---


## Notes
- The approach efficiently handles the constraint of up to \(10^5\) elements.
- The use of sorting and the four-case comparison ensures optimal results.

