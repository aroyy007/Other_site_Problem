# Grid Game - LeetCode Solution

## Problem Description

You are playing a two-player grid game on a **2xN grid** where each cell contains some points. The game is played as follows:

1. Player 1 starts from the top-left cell (grid[0][0]) and moves to the top-right cell (grid[0][N-1]).
2. Player 2 starts from the bottom-right cell (grid[1][N-1]) and moves to the bottom-left cell (grid[1][0]).
3. Both players can only move **right** or **down**. Once a player moves off a row, they cannot return to it.

The goal of Player 1 is to minimize the maximum points Player 2 can collect. Player 2, on the other hand, will always maximize their points.

Given the `grid` (a 2D vector of integers), your task is to determine the **minimum possible maximum points** Player 2 can collect.

### Example 1:

**Input:**
```
grid = [
    [2, 5, 4],
    [1, 5, 1]
]
```

**Output:**
```
4
```

**Explanation:**
- If Player 1 chooses the path `[2, 5, 4]`, Player 2 will take the path `[5, 1]` for a score of 6.
- If Player 1 chooses the path `[2, 5]`, leaving `[4]`, Player 2 will take the path `[5, 4]` for a score of 9.
- The optimal path for Player 1 is `[2]` (top row first column), leaving `[5, 4]` for Player 2. The maximum points Player 2 collects in this case is **4**, which is the minimum possible maximum score.

### Constraints:

- `grid.length == 2`
- `1 <= grid[0].length <= 10^5`
- `1 <= grid[i][j] <= 10^9`

---

## Solution Explanation

The solution uses **prefix sums** to calculate the total points collected by both players based on Player 1's decisions. Here's the approach:

1. Compute prefix sums for the top and bottom rows to keep track of cumulative sums.
2. Simulate Player 1's choices and calculate the remaining scores for Player 2.
3. Keep track of the **minimum possible maximum score** Player 2 can achieve.

### Time Complexity:
- **O(N)**: One pass to compute prefix sums and another pass to evaluate Player 1's decisions.

### Space Complexity:
- **O(N)**: For storing prefix sums.

---
 

Feel free to modify this for your repository! 😊
