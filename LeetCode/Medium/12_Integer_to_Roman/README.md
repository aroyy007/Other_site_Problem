# Integer to Roman Conversion

## Problem Description

Roman numerals are formed by appending the conversions of decimal place values from highest to lowest. The Roman numeral system uses the following symbols and their corresponding values:

| Symbol | Value |
|--------|-------|
| I      | 1     |
| V      | 5     |
| X      | 10    |
| L      | 50    |
| C      | 100   |
| D      | 500   |
| M      | 1000  |

### Rules for Conversion
1. If the value does **not** start with 4 or 9:
   - Select the symbol of the maximal value that can be subtracted from the input.
   - Append that symbol to the result.
   - Subtract its value and repeat for the remainder.

2. If the value **starts with 4 or 9**, use the subtractive form:
   - Represent the value as one symbol subtracted from the next symbol. For example:
     - 4: `IV`
     - 9: `IX`
     - 40: `XL`
     - 90: `XC`
     - 400: `CD`
     - 900: `CM`

3. Only powers of 10 (`I`, `X`, `C`, `M`) can be appended consecutively at most **three times**. If a symbol needs to be appended four times, use the subtractive form instead.

### Examples

#### Example 1:
```plaintext
Input: num = 3749
Output: "MMMDCCXLIX"
Explanation:
- 3000 = MMM (1000 + 1000 + 1000)
- 700 = DCC (500 + 100 + 100)
- 40 = XL (10 less than 50)
- 9 = IX (1 less than 10)
```

#### Example 2:
```plaintext
Input: num = 58
Output: "LVIII"
Explanation:
- 50 = L
- 8 = VIII
```

#### Example 3:
```plaintext
Input: num = 1994
Output: "MCMXCIV"
Explanation:
- 1000 = M
- 900 = CM (100 less than 1000)
- 90 = XC (10 less than 100)
- 4 = IV (1 less than 5)
```

### Constraints
- \(1 \leq \text{num} \leq 3999\)

---

## Solution

### Approach
To convert an integer to a Roman numeral:
1. Use arrays to store Roman numeral values and their corresponding symbols.
2. Iterate through the values array, starting from the largest value.
3. Append the corresponding symbol to the result string and subtract its value from the input number as long as the number is greater than or equal to the value.
4. Continue until the input number is reduced to zero.



## Complexity Analysis

### Time Complexity
- **O(1):** The loop iterates a fixed number of times (13 Roman numeral symbols), regardless of the input size.

### Space Complexity
- **O(1):** No additional space is used apart from a few variables.

---

## Notes
- The solution is optimized to handle any valid input within the constraints.
- The implementation ensures correct handling of subtractive forms (e.g., `IV`, `IX`).

