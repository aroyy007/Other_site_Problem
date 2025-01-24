# 8. String to Integer (atoi)

## Problem Description

The function `myAtoi(string s)` converts a string `s` to a 32-bit signed integer. The conversion process follows specific rules:

1. **Ignore Leading Whitespace**: Skip all leading whitespace characters.
2. **Check Signedness**: Determine the sign of the number based on the presence of '+' or '-' immediately after the whitespace.
3. **Parse Digits**: Convert subsequent characters into a number, stopping at the first non-digit character.
4. **Clamp the Range**: If the resulting integer is out of the range `[-2^{31}, 2^{31} - 1]`:
   - Clamp it to `-2^{31}` if the number is less.
   - Clamp it to `2^{31} - 1` if the number is greater.
5. **Return the Result**: Return the converted integer.

---

## Examples

### Example 1:
**Input:**  
```plaintext
s = "42"
```

**Output:**  
```plaintext
42
```

**Explanation:**  
- Skip leading whitespace: `"42"`.
- No sign provided, default to positive.
- Convert digits: `"42" → 42`.

---

### Example 2:
**Input:**  
```plaintext
s = "   -042"
```

**Output:**  
```plaintext
-42
```

**Explanation:**  
- Skip leading whitespace: `"   -042"`.
- Sign is `'-'`, so the number is negative.
- Convert digits (ignoring leading zeros): `"042" → 42`.
- Result: `-42`.

---

### Example 3:
**Input:**  
```plaintext
s = "1337c0d3"
```

**Output:**  
```plaintext
1337
```

**Explanation:**  
- Skip leading whitespace: `"1337c0d3"`.
- No sign provided, default to positive.
- Convert digits until a non-digit: `"1337" → 1337`.
- Result: `1337`.

---

### Example 4:
**Input:**  
```plaintext
s = "words and 987"
```

**Output:**  
```plaintext
0
```

**Explanation:**  
- The string starts with non-digit characters, so no conversion is performed.

---

### Constraints

- `0 <= s.length <= 200`
- ` s ` consists of:
  - English letters (upper-case and lower-case),
  - Digits ` (0-9) `,
  - Space (' '),
  - '+', '-',
  - '.'.

---

## Implementation

### Algorithm
1. Skip leading whitespace.
2. Check for a '+' or '-' to determine the sign.
3. Parse numeric digits, stopping at the first non-digit character.
4. Check for overflow during conversion:
   - If overflow is detected, return the corresponding boundary value `-2^{31}` or `2^{31} - 1`.
5. Return the result.

### Complexity
- **Time Complexity**: ` O(n) ` — One pass through the string.
- **Space Complexity**: ` O(1) `.

---

### Explanation of Key Sections:
1. **Whitespace Handling**: Skipping initial spaces ensures the number parsing starts correctly.
2. **Sign Handling**: Detects the sign immediately after the spaces.
3. **Digit Parsing**: Accumulates the result while verifying bounds to avoid overflow.
4. **Boundary Conditions**: Returns the clamped result if overflow occurs.
