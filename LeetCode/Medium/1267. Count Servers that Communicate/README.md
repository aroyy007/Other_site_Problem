# Count Servers that Communicate

## Problem Description

You are given a 2D grid representing a map of a server center. Each cell in the grid can either be:

- `1`: A server is present in this cell.
- `0`: No server is present in this cell.

Two servers are considered to **communicate** if they are located in the **same row** or the **same column**.

Your task is to return the **number of servers** that can communicate with at least one other server.

---

### Examples

#### Example 1:

**Input:**
```plaintext
grid = [
    [1, 0],
    [0, 1]
]
```

**Output:**
```plaintext
0
```

**Explanation:**
No servers are in the same row or column to communicate.

---

#### Example 2:

**Input:**
```plaintext
grid = [
    [1, 0],
    [1, 1]
]
```

**Output:**
```plaintext
3
```

**Explanation:**
- The server at `(1, 0)` communicates with the server at `(1, 1)`.
- The server at `(0, 0)` communicates with the server at `(1, 0)`.

---

#### Example 3:

**Input:**
```plaintext
grid = [
    [1, 1, 0, 0],
    [0, 0, 1, 0],
    [0, 0, 1, 0],
    [0, 0, 0, 1]
]
```

**Output:**
```plaintext
4
```

**Explanation:**
- The servers in the first row communicate with each other.
- The servers in the third column communicate with each other.
- The server in the bottom-right corner does not communicate with any other server.

---

### Constraints:

- ```m == grid.length```
- ```n == grid[i].length```
- ```1 <= m <= 250```
- ```1 <= n <= 250```
- ```grid[i][j] == 0 or 1```

---

## Solution Explanation

The solution involves two main steps:

1. **Count Servers in Rows and Columns**:
   - Use two arrays, `row` and `col`, to count the number of servers in each row and column.

2. **Identify Communicating Servers**:
   - Iterate through the grid again and check each server:
     - If there are more than 1 servers in its row or column, it can communicate with another server.

### Key Steps in the Code:

1. **Initialization**:
   - Create arrays `row` and `col` to store the server counts for rows and columns.
   - Use nested loops to populate these arrays.

2. **Check Communication**:
   - For each server in the grid, check if either its row or column count is greater than 1.
   - Increment the result if true.

---

### Complexity Analysis:

- **Time Complexity**:
  - ```O(m * n)```: Two passes over the grid (one to count and one to check).

- **Space Complexity**:
  - ```O(m + n)```: Additional space for `row` and `col` arrays.

---
