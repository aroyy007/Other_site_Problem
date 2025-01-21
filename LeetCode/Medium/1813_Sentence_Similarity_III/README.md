# Sentence Similarity III

## Problem Description

You are given two sentences, `sentence1` and `sentence2`, each composed of words separated by spaces. A sentence is considered similar to another if you can insert an arbitrary sentence (possibly empty) into one of the sentences to make them equal. The inserted sentence must be separated from the existing words by spaces.

### Examples

#### Example 1:

**Input:**
```plaintext
sentence1 = "My name is Haley"
sentence2 = "My Haley"
```

**Output:**
```plaintext
true
```

**Explanation:**
You can insert "name is" between "My" and "Haley" in `sentence2` to make it equal to `sentence1`.

---

#### Example 2:

**Input:**
```plaintext
sentence1 = "of"
sentence2 = "A lot of words"
```

**Output:**
```plaintext
false
```

**Explanation:**
No single sentence can be inserted to make `sentence1` and `sentence2` equal.

---

#### Example 3:

**Input:**
```plaintext
sentence1 = "Eating right now"
sentence2 = "Eating"
```

**Output:**
```plaintext
true
```

**Explanation:**
You can insert "right now" at the end of `sentence2` to make it equal to `sentence1`.

---

### Constraints:
- \( 1 \leq \text{sentence1.length}, \text{sentence2.length} \leq 100 \)
- `sentence1` and `sentence2` consist of uppercase and lowercase English letters and spaces.
- Words in `sentence1` and `sentence2` are separated by a single space.

---

## Solution Explanation

This solution checks if one sentence can be made equal to the other by inserting a sub-sentence. The approach is:

1. **Split the Sentences**: Convert both sentences into vectors of words using space as the delimiter.
2. **Compare Words**: 
   - Identify the smaller and larger sentence (by word count).
   - Compare words from the beginning and the end of the sentences until there’s a mismatch.
3. **Verify Remaining Words**: After matching from both ends, check if the unmatched portion of the larger sentence can fit within the smaller sentence.

### Key Steps in the Code:

1. **Splitting Sentences**: Use a loop to separate words and store them in vectors.
2. **Helper Function `isSimilar`**:
   - Takes two vectors (larger and smaller) and matches words from both ends.
   - Ensures that the unmatched portion is consistent with the similarity condition.
3. Return `true` if the condition is satisfied; otherwise, return `false`.

### Time Complexity:
- **O(L + S)**: \(L\) and \(S\) are the lengths of the sentences (number of words).

### Space Complexity:
- **O(L + S)**: Space used for storing words of both sentences in vectors.

---
