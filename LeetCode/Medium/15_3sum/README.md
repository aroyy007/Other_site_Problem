# 3Sum

## Problem Description

Given an integer array `nums`, find all unique triplets `[nums[i], nums[j], nums[k]]` such that:

1. `i`, `j`, and `k` must be different indices.  
2. The numbers at these indices must satisfy:  
   ` nums[i] + nums[j] + nums[k] = 0 `.

The solution set must **not contain duplicate triplets**.

---

### Examples

#### Example 1:

**Input:**
```plaintext
nums = [-1, 0, 1, 2, -1, -4]
```

**Output:**
```plaintext
[[-1, -1, 2], [-1, 0, 1]]
```

**Explanation:**
- \( nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0 \)
- \( nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0 \)
- \( nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0 \)

The distinct triplets are `[-1, -1, 2]` and `[-1, 0, 1]`.

---

#### Example 2:

**Input:**
```plaintext
nums = [0, 1, 1]
```

**Output:**
```plaintext
[]
```

**Explanation:**
There is no triplet that sums up to 0.

---

#### Example 3:

**Input:**
```plaintext
nums = [0, 0, 0]
```

**Output:**
```plaintext
[[0, 0, 0]]
```

**Explanation:**
The only possible triplet sums up to 0.

---

### Constraints

- 3 <= nums.length <= 3000
- 10^5 <= nums[i] <= 10^5

---

## Solution Explanation

The solution uses the **two-pointer technique** to efficiently find all unique triplets that sum to zero.

### Steps:

1. **Sort the Array**:
   - Sorting simplifies the process of skipping duplicates and navigating the array.
   - Complexity: ` O(n log n)`

2. **Iterate Through the Array**:
   - For each number `nums[i]`, find pairs \( nums[left] \) and \( nums[right] \) such that \( nums[i] + nums[left] + nums[right] = 0 \).

3. **Two-Pointer Technique**:
   - Initialize pointers:
     - `left = i + 1`
     - `right = nums.size() - 1`
   - If the sum is zero, store the triplet.
   - If the sum is less than zero, increment the `left` pointer to increase the sum.
   - If the sum is greater than zero, decrement the `right` pointer to decrease the sum.

4. **Avoid Duplicates**:
   - Skip duplicate elements while iterating through the array or adjusting the pointers.

### Complexity Analysis:

- **Time Complexity**:
  - Sorting: ` O(n log n)`
  - Iteration and two-pointer search: `O(n^2)`
  - Overall: `O(n^2)`

- **Space Complexity**:
  - `O(1)`: No additional space is used other than the output.

---
