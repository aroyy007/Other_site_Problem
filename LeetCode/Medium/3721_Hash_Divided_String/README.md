# String Hashing Algorithm

## Problem Description

You are given a string `s` of length `n` and an integer `k`, where `n` is a multiple of `k`. The task is to hash the string `s` into a new string `result`, which has a length of `n / k`.

### Steps to Hash the String
1. Divide `s` into `n / k` substrings, each of length `k`.
2. Initialize `result` as an empty string.
3. For each substring:
   - Calculate the hash value of each character as the index of that character in the English alphabet (`'a'` → `0`, `'b'` → `1`, ..., `'z'` → `25`).
   - Compute the sum of the hash values of all characters in the substring.
   - Find the remainder of this sum when divided by `26` (called `hashedChar`).
   - Identify the character in the English lowercase alphabet that corresponds to `hashedChar`.
   - Append that character to the end of `result`.

### Examples

#### Example 1:
```plaintext
Input: s = "abcd", k = 2
Output: "bf"
Explanation:
- First substring: "ab", 0 + 1 = 1, 1 % 26 = 1, result[0] = 'b'.
- Second substring: "cd", 2 + 3 = 5, 5 % 26 = 5, result[1] = 'f'.
```

#### Example 2:
```plaintext
Input: s = "mxz", k = 3
Output: "i"
Explanation:
- Only substring: "mxz", 12 + 23 + 25 = 60, 60 % 26 = 8, result[0] = 'i'.
```

### Constraints
- `1 <= k <= 100`
- `k <= s.length <= 1000`
- `s.length` is divisible by `k`.
- `s` consists only of lowercase English letters.

---

## Solution

### Approach
The solution involves:
1. Splitting the string `s` into substrings of length `k`.
2. Calculating the hash values for each substring and determining the corresponding character.
3. Constructing the `result` string based on the calculated characters.


## Complexity Analysis

### Time Complexity
- Splitting the string into substrings: \(O(n)\)
- Calculating hash values for each substring: \(O(n)\)
- **Total:** \(O(n)\)

### Space Complexity
- \(O(n / k)\) for storing substrings.
- \(O(1)\) additional space for variables.

---

## Notes
- The function ensures that the constraints are respected.
- It effectively handles strings of varying lengths and values of `k` within the specified limits.

