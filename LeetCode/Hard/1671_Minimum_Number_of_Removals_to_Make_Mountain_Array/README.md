# Minimum Removals to Make Mountain Array

## Problem Description

An array `arr` is called a **mountain array** if and only if:

1. `arr.length >= 3`
2. There exists some index `i` (0-indexed) with `0 < i < arr.length - 1` such that:
   - `arr[0] < arr[1] < ... < arr[i - 1] < arr[i]`
   - `arr[i] > arr[i + 1] > ... > arr[arr.length - 1]`

Given an integer array `nums`, your task is to return the **minimum number of elements to remove** to make `nums` a mountain array.

### Examples

#### Example 1:
```plaintext
Input: nums = [1, 3, 1]
Output: 0
Explanation: The array itself is a mountain array, so no elements need to be removed.
```

#### Example 2:
```plaintext
Input: nums = [2, 1, 1, 5, 6, 2, 3, 1]
Output: 3
Explanation: One solution is to remove the elements at indices 0, 1, and 5, resulting in nums = [1, 5, 6, 3, 1].
```

### Constraints
- `3 <= nums.length <= 1000`
- `1 <= nums[i] <= 10^9`
- It is guaranteed that you can make a mountain array out of `nums`.

---

## Solution

### Approach
This problem can be solved using **Dynamic Programming** to determine the longest increasing and decreasing subsequences. Here's the detailed approach:

1. **Calculate Longest Increasing Subsequence (LIS):**
   - Use a DP array `inc` where `inc[i]` represents the length of the longest increasing subsequence ending at index `i`.

2. **Calculate Longest Decreasing Subsequence (LDS):**
   - Use another DP array `dec` where `dec[i]` represents the length of the longest decreasing subsequence starting at index `i`.

3. **Find Maximum Mountain Length:**
   - For each index `i`, if both `inc[i] > 1` and `dec[i] > 1`, compute the mountain length as `inc[i] + dec[i] - 1`.

4. **Result:**
   - Subtract the length of the maximum mountain from the total number of elements in `nums` to get the minimum number of removals.

---


## Complexity Analysis

### Time Complexity
- **LIS Calculation:** \(O(n^2)\)
- **LDS Calculation:** \(O(n^2)\)
- **Total:** \(O(n^2)\)

### Space Complexity
- \(O(n)\) for the `inc` and `dec` arrays.

---

## Notes
- The given solution ensures the constraints are respected.
- The approach leverages dynamic programming for efficiency, making it feasible for arrays up to the maximum size of 1000.

