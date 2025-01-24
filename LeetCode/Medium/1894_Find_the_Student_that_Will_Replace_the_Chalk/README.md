# Find the Student that Will Replace the Chalk

## Problem Statement
You are given an array `chalk` of integers, where each element represents the amount of chalk a student consumes when solving a problem. Initially, there are `k` pieces of chalk available. The students take turns consuming chalk in a cyclic manner (starting from student 0, then student 1, and so on).

If the remaining chalk is less than the amount required by the current student, that student is tasked with replacing the chalk. The goal is to determine the index of this student.

## Constraints
- `chalk.length == n`
- `1 <= n <= 10^5`
- `1 <= chalk[i] <= 10^5`
- `1 <= k <= 10^9`

---

## Examples

### Example 1
**Input:**
```plaintext
chalk = [5, 1, 5]
k = 22
```
**Output:**
```plaintext
0
```
**Explanation:**
The sequence of events is as follows:
- Student 0 uses 5 chalk, remaining chalk = 17.
- Student 1 uses 1 chalk, remaining chalk = 16.
- Student 2 uses 5 chalk, remaining chalk = 11.
- Student 0 uses 5 chalk, remaining chalk = 6.
- Student 1 uses 1 chalk, remaining chalk = 5.
- Student 2 uses 5 chalk, remaining chalk = 0.
Student 0 does not have enough chalk and will replace it.

---

### Example 2
**Input:**
```plaintext
chalk = [3, 4, 1, 2]
k = 25
```
**Output:**
```plaintext
1
```
**Explanation:**
The sequence of events is as follows:
- Student 0 uses 3 chalk, remaining chalk = 22.
- Student 1 uses 4 chalk, remaining chalk = 18.
- Student 2 uses 1 chalk, remaining chalk = 17.
- Student 3 uses 2 chalk, remaining chalk = 15.
- Student 0 uses 3 chalk, remaining chalk = 12.
- Student 1 uses 4 chalk, remaining chalk = 8.
- Student 2 uses 1 chalk, remaining chalk = 7.
- Student 3 uses 2 chalk, remaining chalk = 5.
- Student 0 uses 3 chalk, remaining chalk = 2.
- Student 1 cannot complete their turn and will replace the chalk.

---

## Approach
### Step-by-Step Algorithm
1. **Calculate the Total Chalk Requirement in One Cycle**:
   - Use the `accumulate` function to calculate the total chalk consumed in one complete pass of all students.

2. **Reduce k Using Modulo**:
   - Perform `k = k % totalChalk` to reduce the chalk to the remainder after several complete cycles. This step ensures that we only focus on the final incomplete cycle, saving computational time.

3. **Find the Student Who Replaces the Chalk**:
   - Iterate through the `chalk` array. For each student, subtract their chalk usage from the remaining chalk (`k`).
   - If `k` becomes less than the chalk required by the current student, return their index.

---

## Implementation
Here is the C++ solution:

```cpp
#include <vector>
#include <numeric>
using namespace std;

class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        // Step 1: Calculate total chalk used in one complete cycle
        long long totalChalk = accumulate(chalk.begin(), chalk.end(), 0LL);

        // Step 2: Reduce k using modulo to focus on the last cycle
        k %= totalChalk;

        // Step 3: Find the student who cannot be served
        for (int i = 0; i < chalk.size(); i++) {
            if (k < chalk[i]) {
                return i; // This student will replace the chalk
            }
            k -= chalk[i];
        }
        return -1; // This should never be reached
    }
};
```

---

## Complexity Analysis

### Time Complexity
- **Step 1 (Total Calculation):** \( O(n) \)
  - We compute the total chalk consumed in one full cycle using `accumulate`.
- **Step 2 (Modulo):** \( O(1) \)
  - Modulo operation is constant time.
- **Step 3 (Iteration):** \( O(n) \)
  - We iterate through the array to determine the student who replaces the chalk.

**Total Time Complexity:** \( O(n) \)

### Space Complexity
- The solution uses \( O(1) \) additional space as no extra data structures are required.

---

## Key Insights
1. Using modulo reduction is crucial to handle the large input constraints efficiently.
2. The solution avoids redundant computations by focusing on the final incomplete cycle.

---

## Edge Cases
1. **Single Student:**
   - Input: `chalk = [5]`, `k = 7`
   - Output: `0`.
   - Explanation: The single student will need to replace the chalk after one turn.

2. **Large k:**
   - Input: `chalk = [1, 2, 3]`, `k = 10^9`
   - Output: Determined efficiently using modulo.

3. **Exact Chalk Usage:**
   - Input: `chalk = [3, 3, 3]`, `k = 9`
   - Output: `0`.
   - Explanation: After consuming all chalk, the first student will need to replace it.

---


## Additional Notes
- The solution is robust to large values of `n` and `k` due to its efficient use of modulo and linear iteration.
- Ensure the input constraints are adhered to avoid undefined behavior.

