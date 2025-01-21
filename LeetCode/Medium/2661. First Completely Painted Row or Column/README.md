# First Complete Index

## Problem Description

You are given a **2D matrix** `mat` of size `rows x cols` filled with distinct integers and a 1D array `arr`. The goal is to determine the **first complete index** in `arr`, such that by marking elements in `mat` in the order they appear in `arr`, either:

1. A **row** in `mat` is completely marked, or  
2. A **column** in `mat` is completely marked.

Return the **0-based index** of the first occurrence in `arr` that satisfies this condition. If no row or column can be completely marked, return `-1`.

### Example 1:

**Input:**
```plaintext
arr = [1, 3, 4, 2]
mat = [
    [2, 4],
    [1, 3]
]
```

**Output:**
```plaintext
2
```

**Explanation:**
1. Marking starts with `1` → Matrix:  
   ```
   [2, 4]
   [X, 3]
   ```
2. Then `3` → Matrix:  
   ```
   [2, 4]
   [X, X]
   ```
3. Then `4` → Matrix:  
   ```
   [2, X]
   [X, X]
   ```
4. Finally, `2` → Matrix:  
   ```
   [X, X]
   [X, X]
   ```

The first complete row is formed at index `2` in `arr`.

---

### Constraints:

- `1 <= rows, cols <= 500`
- `1 <= arr.length <= rows * cols`
- All elements in `mat` and `arr` are distinct integers.

---

## Solution Explanation

The solution uses a **mapping approach** to efficiently track the progress of marking rows and columns:

1. Create a mapping from each element in `mat` to its position (row, column).
2. Use two arrays to count the marked elements in each row and column.
3. Traverse the elements of `arr` in order:
   - Mark the corresponding row and column for each element.
   - Check if marking this element completes a row or column.
   - If yes, return the current index in `arr`.

### Time Complexity:
- **O(N + rows * cols)**:  
  - Building the position map: \(O(rows \times cols)\)  
  - Processing the elements in `arr`: \(O(N)\).

### Space Complexity:
- **O(rows + cols)**: For tracking row and column counts.

---
