# Minimum Subarray Removal to Make Sum Divisible by p

## Problem Description

Given an array of positive integers `nums`, you need to remove the smallest subarray (possibly empty) such that the sum of the remaining elements is divisible by `p`. It is not allowed to remove the entire array.

Return the length of the smallest subarray that needs to be removed, or `-1` if it's impossible.

A subarray is defined as a contiguous block of elements in the array.

---

## Examples

### Example 1
**Input:**
```plaintext
nums = [3,1,4,2], p = 6
```
**Output:**
```plaintext
1
```
**Explanation:**
- The sum of the elements in `nums` is 10, which is not divisible by 6.
- We can remove the subarray `[4]`, and the sum of the remaining elements is 6, which is divisible by 6.

---

### Example 2
**Input:**
```plaintext
nums = [6,3,5,2], p = 9
```
**Output:**
```plaintext
2
```
**Explanation:**
- We cannot remove a single element to get a sum divisible by 9.
- The best way is to remove the subarray `[5,2]`, leaving us with `[6,3]` with a sum of 9.

---

### Example 3
**Input:**
```plaintext
nums = [1,2,3], p = 3
```
**Output:**
```plaintext
0
```
**Explanation:**
- The sum is already divisible by 3, so no removal is necessary.

---
## Constraints

1. ```1 <= nums.length <= 10^5```
2. ```1 <= nums[i] <= 10^9```
3. ```1 <= p <= 10^9```

---

## Solution

### Approach
1. Compute the total sum of the array.
2. If the sum is already divisible by `p`, return `0`.
3. Compute the remainder of the total sum modulo `p`.
4. Use a hash map (`prefixMod`) to store the prefix sums modulo `p` encountered so far and their corresponding indices.
5. Iterate through the array, maintaining a running prefix sum:
   - Calculate the current modulo of the prefix sum.
   - Determine the target modulo needed to adjust the remainder to 0.
   - Check if this target modulo exists in the hash map.
   - If found, update the minimum length of the subarray that can be removed.
6. If no such subarray is found, return `-1`. Otherwise, return the minimum length.

---

## Complexity Analysis

### Time Complexity
- **O(n):**
  - Computing the total sum takes **O(n)**.
  - Iterating through the array and updating the hash map also takes **O(n)**.

### Space Complexity
- **O(n):**
  - The hash map stores at most **n** entries (one for each prefix sum).

---


## Notes
- The algorithm leverages the properties of prefix sums and modular arithmetic to efficiently find the smallest subarray.
- It handles large constraints effectively, making it suitable for competitive programming and large datasets.

