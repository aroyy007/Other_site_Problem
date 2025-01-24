# Remove All Occurrences of a Substring

## Problem Description

Given two strings `s` and `part`, perform the following operation on `s` until all occurrences of the substring `part` are removed:

1. Find the leftmost occurrence of the substring `part` and remove it from `s`.
2. Repeat until there are no occurrences of `part` in `s`.

Return the final value of `s` after removing all occurrences of `part`.

### Example 1

**Input:**
```plaintext
s = "daabcbaabcbc"
part = "abc"
```

**Output:**
```plaintext
"dab"
```

**Explanation:**
1. `s = "daabcbaabcbc"`, remove `"abc"` starting at index 2, so `s = "dabaabcbc"`.
2. `s = "dabaabcbc"`, remove `"abc"` starting at index 4, so `s = "dababc"`.
3. `s = "dababc"`, remove `"abc"` starting at index 3, so `s = "dab"`.
4. Now `s` has no occurrences of `"abc"`.

### Example 2

**Input:**
```plaintext
s = "axxxxyyyyb"
part = "xy"
```

**Output:**
```plaintext
"ab"
```

**Explanation:**
1. `s = "axxxxyyyyb"`, remove `"xy"` starting at index 4, so `s = "axxxyyyb"`.
2. `s = "axxxyyyb"`, remove `"xy"` starting at index 3, so `s = "axxyyb"`.
3. `s = "axxyyb"`, remove `"xy"` starting at index 2, so `s = "axyb"`.
4. `s = "axyb"`, remove `"xy"` starting at index 1, so `s = "ab"`.
5. Now `s` has no occurrences of `"xy"`.

## Constraints

- `1 <= s.length <= 1000`
- `1 <= part.length <= 1000`
- `s` and `part` consist of lowercase English letters.

---

## Solution

To solve this problem, we use the `std::string` functions `find` and `erase` in C++ to repeatedly find and remove the substring `part` from `s`.

### Steps
1. Use `s.find(part)` to locate the leftmost occurrence of `part` in `s`.
2. If found, use `s.erase(position, part.length())` to remove it from `s`.
3. Repeat until `part` is no longer found in `s`.
4. Return the final value of `s`.

---

## Explanation

### Key Functions Used

1. **`find`:**
   - Searches for the first occurrence of the substring `part` in `s`.
   - Returns the index of the first occurrence or `std::string::npos` if `part` is not found.

2. **`erase`:**
   - Removes a substring from `s` starting at the specified index and spanning a given length.

### Complexity Analysis

- **Time Complexity:**
  - Each `find` operation scans the string `s`.
  - Each `erase` operation removes a substring, effectively reducing the size of `s`.
  - In the worst case, `s.length / part.length` operations are performed, leading to a complexity of **O(n \* m)**, where `n` is the length of `s` and `m` is the length of `part`.

- **Space Complexity:**
  - The solution uses no additional space, so the space complexity is **O(1)**.

---

## Examples

### Example 1 Walkthrough

1. **Initial String:** `s = "daabcbaabcbc"`, `part = "abc"`
   - Find `"abc"` at index 2.
   - Remove `"abc"`. New `s = "dabaabcbc"`.

2. **Updated String:** `s = "dabaabcbc"`
   - Find `"abc"` at index 4.
   - Remove `"abc"`. New `s = "dababc"`.

3. **Updated String:** `s = "dababc"`
   - Find `"abc"` at index 3.
   - Remove `"abc"`. New `s = "dab"`.

4. **Final String:** `s = "dab"`. No occurrences of `"abc"` left.

**Output:** `"dab"`

### Example 2 Walkthrough

1. **Initial String:** `s = "axxxxyyyyb"`, `part = "xy"`
   - Find `"xy"` at index 4.
   - Remove `"xy"`. New `s = "axxxyyyb"`.

2. **Updated String:** `s = "axxxyyyb"`
   - Find `"xy"` at index 3.
   - Remove `"xy"`. New `s = "axxyyb"`.

3. **Updated String:** `s = "axxyyb"`
   - Find `"xy"` at index 2.
   - Remove `"xy"`. New `s = "axyb"`.

4. **Updated String:** `s = "axyb"`
   - Find `"xy"` at index 1.
   - Remove `"xy"`. New `s = "ab"`.

**Output:** `"ab"`

---

## Edge Cases

1. **No Occurrence:**
   - Input: `s = "abcdef"`, `part = "gh"`
   - Output: `"abcdef"`

2. **Full Removal:**
   - Input: `s = "aaaaa"`, `part = "a"`
   - Output: `""`

3. **Substring Same as Input:**
   - Input: `s = "abc"`, `part = "abc"`
   - Output: `""`

---

## Summary
This solution efficiently removes all occurrences of a given substring `part` from the string `s` by leveraging the `find` and `erase` functions in a loop. The algorithm is simple and clean, adhering to the constraints and ensuring optimal performance for the given input limits.

