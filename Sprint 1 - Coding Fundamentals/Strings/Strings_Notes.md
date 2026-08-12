# 📙 Sprint 1 – Strings

**Questions Covered:** Q035 – Q042

---

# Q035 – Count Vowels and Consonants

## 📖 Concept

This problem simulates a language processor that categorises letters in a string. Given a lowercase string S, we count how many characters are vowels (`a, e, i, o, u`) and how many are consonants. The approach is straightforward: iterate through the string character by character, checking membership in a fixed vowel set, and skipping spaces if present.

---

## 📝 Algorithm

1. Initialize `vowels = 0`, `consonants = 0`.
2. Define the vowel set: `{a, e, i, o, u}`.
3. For each character `c` in `S`:
    - If `c` is a space → skip.
    - Else if `c` is in the vowel set → `vowels += 1`.
    - Else → `consonants += 1`.
4. Print `vowels` and `consonants`.

---

## 💡 Dry Run

Input: `S = 'hello'`

| Char | In Vowel Set? | Vowels | Consonants |
| --- | --- | --- | --- |
| h | No | 0 | 1 |
| e | Yes | 1 | 1 |
| l | No | 1 | 2 |
| l | No | 1 | 3 |
| o | Yes | 2 | 3 |

Output: `Vowels=2, Consonants=3`

Edge case, Input: `S = 'rhythm'` → Output: `Vowels=0, Consonants=6` (no standard vowels present)

---

## 📚 Concepts Learned

- String Iteration
- Set Membership Check
- Character Classification
- Conditionals

---

## ⏱ Time Complexity

**O(L)** — where L is the length of the string; each character is visited once.

## 💾 Space Complexity

**O(1)** — only two counters are stored (the vowel set is fixed-size).

---

## ⭐ Revision Notes

- Use a **set** (not a list) for the vowel check — set lookups are O(1) versus O(k) for a list.
- Always skip whitespace explicitly if the string may contain spaces.
- "Rhythm" is a classic trick example — words can have zero vowels under the standard a-e-i-o-u definition (y is not counted).
- This character-by-character iteration pattern is the foundation for nearly every other string problem in this module.

---

---

# Q036 – Reverse a String

## 📖 Concept

This problem simulates a cipher tool that reverses strings. It can be solved two ways: using a built-in slice operation (`S[::-1]`), or manually with a loop that builds the reversed string character by character. Knowing both matters — interviewers frequently disallow built-in shortcuts to test genuine understanding of the underlying logic.

---

## 📝 Algorithm

**Method 1 – Built-in Slice**

1. Return `S[::-1]`.

**Method 2 – Manual Loop**

1. Initialize `reversed = ""`.
2. For each character `c` in `S` (left to right):
    - Prepend `c` to `reversed` (i.e., `reversed = c + reversed`).
3. Print `reversed`.

---

## 💡 Dry Run

Input: `S = 'hello'` (manual loop method)

| Char | reversed (after prepend) |
| --- | --- |
| h | h |
| e | eh |
| l | leh |
| l | lleh |
| o | olleh |

Output: `olleh`

Edge case, Input: `S = 'a'` → Output: `a` (single character is its own reverse)

---

## 📚 Concepts Learned

- String Slicing
- String Iteration
- String Building/Concatenation

---

## ⏱ Time Complexity

**O(L)** — every character is visited/processed once.

## 💾 Space Complexity

**O(L)** — a new string of the same length is built.

---

## ⭐ Revision Notes

- Know **both** methods — slicing is fast to write, but many interviews ban built-ins specifically to test manual logic.
- Prepending characters one at a time (`reversed = c + reversed`) works but can be inefficient in some languages; appending to a list and reversing/joining is often preferred in practice.
- Palindromic strings (like "racecar") reverse to themselves — a useful property reused directly in Q037.

---

---

# Q037 – Check Palindrome String

## 📖 Concept

This problem checks whether a string reads the same forwards and backwards. The basic version simply compares the string to its reverse. The advanced version handles real-world sentences like "A man a plan a canal Panama," which requires first **normalising** the string — converting to lowercase and removing spaces (and typically punctuation) — before comparing it to its reverse.

---

## 📝 Algorithm

**Basic Version**

1. Compare `S == reverse(S)` (reusing Q036's reverse logic).
2. If equal → Palindrome; else → Not Palindrome.

**Advanced Version (normalised)**

1. Convert `S` to lowercase.
2. Remove all spaces (and non-alphanumeric characters, if required).
3. Compare the normalised string to its reverse.
4. If equal → Palindrome; else → Not Palindrome.

---

## 💡 Dry Run

Input: `S = 'madam'`

| Step | Value |
| --- | --- |
| S | madam |
| reverse(S) | madam |
| Equal? | Yes → Palindrome |

Input: `S = 'A man a plan a canal Panama'`

| Step | Value |
| --- | --- |
| Lowercase | a man a plan a canal panama |
| Remove spaces | amanaplanacanalpanama |
| Reverse | amanaplanacanalpanama |
| Equal? | Yes → Palindrome |

---

## 📚 Concepts Learned

- String Reversal Reuse
- String Normalisation (lowercase, whitespace removal)
- Comparison Operators

---

## ⏱ Time Complexity

**O(L)** — normalisation and reversal are both linear passes over the string.

## 💾 Space Complexity

**O(L)** — a normalised copy of the string is created.

---

## ⭐ Revision Notes

- Always **normalise first** (lowercase + remove spaces/punctuation) before comparing — case and spacing differences are the most common cause of false negatives.
- This problem reuses the Reverse String logic from Q036 directly — another example of function composition.
- Real interview variants often add punctuation ("Was it a car or a cat I saw?") — the same normalisation approach extends naturally.

---

---

# Q038 – Check Anagram

## 📖 Concept

Two strings are anagrams if they contain the exact same letters, potentially rearranged in a different order (e.g., "listen" and "silent"). There are two standard approaches: sorting both strings and comparing them (simple but O(n log n)), or building a frequency map of characters for each string and comparing the maps (more efficient at O(n)).

---

## 📝 Algorithm

**Method 1 – Sorting**

1. Sort the characters of string `A`.
2. Sort the characters of string `B`.
3. If sorted A == sorted B → Anagram; else → Not Anagram.

**Method 2 – Frequency Map**

1. Build a character-count map for `A`.
2. Build a character-count map for `B`.
3. If the two maps are identical → Anagram; else → Not Anagram.

---

## 💡 Dry Run

Input: `A = 'listen', B = 'silent'`

| Step | A | B |
| --- | --- | --- |
| Sorted | eilnst | eilnst |
| Equal? | Yes | → Anagram |

Input: `A = 'hello', B = 'world'`

| Step | A | B |
| --- | --- | --- |
| Sorted | ehllo | dlorw |
| Equal? | No | → Not Anagram |

---

## 📚 Concepts Learned

- Sorting
- Frequency Maps / Hash Maps
- String Comparison

---

## ⏱ Time Complexity

**O(n log n)** for the sorting method; **O(n)** for the frequency-map method.

## 💾 Space Complexity

**O(n)** for both methods — sorted copies or frequency maps require additional storage proportional to string length.

---

## ⭐ Revision Notes

- Sorting method: simple to write, `O(n log n)`.
- Frequency map method: more efficient at `O(n)`, and the interview-preferred answer when efficiency is discussed.
- Always check that both strings have the **same length** first — an instant early-exit if they don't match (different lengths can never be anagrams).
- Case sensitivity matters — normalise to lowercase first unless the problem specifies otherwise.

---

---

# Q039 – Count Word Frequency

## 📖 Concept

This problem simulates a text analyser that counts how many times a target word W appears in a sentence S, in a case-insensitive manner. The sentence is split into individual words, each word is lowercased, and then compared against the lowercased target word — accumulating a count of matches.

---

## 📝 Algorithm

1. Split `S` into a list of words (by spaces).
2. Lowercase the target word: `W = lowercase(W)`.
3. Initialize `count = 0`.
4. For each `word` in the split list:
    - If `lowercase(word) == W` → `count += 1`.
5. Print `count`.

---

## 💡 Dry Run

Input: `S = 'to be or not to be', W = 'be'`

| Word | Lowercased | Matches 'be'? | Count |
| --- | --- | --- | --- |
| to | to | No | 0 |
| be | be | Yes | 1 |
| or | or | No | 1 |
| not | not | No | 1 |
| to | to | No | 1 |
| be | be | Yes | 2 |

Output: `2`

Input: `S = 'Apple apple APPLE', W = 'apple'` → Output: `3` (all match after lowercasing)

---

## 📚 Concepts Learned

- String Splitting
- Case Normalisation
- Word-by-Word Comparison
- Accumulator Pattern

---

## ⏱ Time Complexity

**O(L)** — where L is the total length of the sentence (splitting and comparing are both linear).

## 💾 Space Complexity

**O(W)** — where W is the number of words, for storing the split list.

---

## ⭐ Revision Notes

- Always **lowercase both** the sentence's words and the target word — comparing without normalising is a very common bug.
- Splitting on spaces assumes single-space-separated words; extra whitespace or punctuation may need additional cleaning in real-world text.
- Return `0` cleanly when the word is not found at all — don't let this be an unhandled or crashing case.

---

---

# Q040 – Caesar Cipher Encoder and Decoder

## 📖 Concept

A Caesar cipher shifts each letter forward by a fixed number of positions, K (e.g., with K=3, 'A' becomes 'D'). This is implemented using ASCII arithmetic: `new = chr((ord(c) - ord('A') + K) % 26 + ord('A'))`. The modulo operation is what allows the shift to "wrap around" — so 'Z' shifted forward wraps back to 'A', 'B', 'C', etc. Decoding simply reverses the process by shifting backward by K (or equivalently, forward by `26 - K`).

---

## 📝 Algorithm

**Encoding**

1. For each character `c` in the text:
    - Compute `new = chr((ord(c) - ord('A') + K) % 26 + ord('A'))`.
2. Build and print the encoded string.

**Decoding**

1. For each character `c` in the encoded text:
    - Compute `original = chr((ord(c) - ord('A') - K + 26) % 26 + ord('A'))`.
2. Build and print the decoded string.

---

## 💡 Dry Run

Encoding, Input: `text = 'HELLO', K = 3`

| Char | ord(c)-ord('A') | +K | %26 | New Char |
| --- | --- | --- | --- | --- |
| H | 7 | 10 | 10 | K |
| E | 4 | 7 | 7 | H |
| L | 11 | 14 | 14 | O |
| L | 11 | 14 | 14 | O |
| O | 14 | 17 | 17 | R |

Output: `KHOOR`

Wraparound example, Input: `text = 'XYZ', K = 3`

| Char | ord(c)-ord('A') | +K | %26 | New Char |
| --- | --- | --- | --- | --- |
| X | 23 | 26 | 0 | A |
| Y | 24 | 27 | 1 | B |
| Z | 25 | 28 | 2 | C |

Output: `ABC`

---

## 📚 Concepts Learned

- ASCII / Character Codes
- Modular Arithmetic
- String Encoding/Decoding
- Wraparound Logic

---

## ⏱ Time Complexity

**O(L)** — each character is processed exactly once.

## 💾 Space Complexity

**O(L)** — the encoded/decoded string is the same length as the input.

---

## ⭐ Revision Notes

- Core formula: `new = chr((ord(c) - ord('A') + K) % 26 + ord('A'))`.
- The `% 26` is what handles wraparound (Z → A) — without it, the shift would go out of the alphabet's ASCII range.
- Decoding: shift by `-K`, but add `26` before the modulo (`(... - K + 26) % 26`) to avoid negative numbers in languages where `%` can return negative results.
- Be careful to preserve non-letter characters (spaces, punctuation) unshifted if the input isn't guaranteed to be all-uppercase letters.

---

---

# Q041 – Run-Length Encoding

## 📖 Concept

Run-Length Encoding (RLE) is a basic compression technique that replaces consecutive identical characters with the character followed by its count (e.g., `'AAABBBCC'` becomes `'A3B3C2'`). The algorithm walks through the string, counting how many times each character repeats consecutively, and emits `char + count` whenever the character changes. If a character's count is 1, some variants omit the number.

---

## 📝 Algorithm

1. Initialize `result = ""`, `count = 1`.
2. For `i` from `1` to `length(S) - 1`:
    - If `S[i] == S[i-1]` → `count += 1`.
    - Else:
        - Append `S[i-1] + count` to `result`.
        - Reset `count = 1`.
3. After the loop, append the final character and its count.
4. Print `result`.

---

## 💡 Dry Run

Input: `S = 'AAABBBCCDDDD'`

| i | S[i] | Compare to S[i-1] | count | Emitted |
| --- | --- | --- | --- | --- |
| 1 | A | == | 2 | — |
| 2 | A | == | 3 | — |
| 3 | B | != | reset to 1 | A3 |
| 4 | B | == | 2 | — |
| 5 | B | == | 3 | — |
| 6 | C | != | reset to 1 | B3 |
| 7 | C | == | 2 | — |
| 8 | D | != | reset to 1 | C2 |
| 9-11 | D,D,D | == | 4 | — |
| (end) | — | — | — | D4 |

Output: `A3B3C2D4`

Edge case, Input: `S = 'ABCD'` → Output: `ABCD` (no repeated runs — counts of 1 are omitted)

---

## 📚 Concepts Learned

- String Traversal
- Run/Streak Counting
- Conditional Logic within Loops
- Basic Compression Concepts

---

## ⏱ Time Complexity

**O(L)** — a single pass through the string.

## 💾 Space Complexity

**O(L)** — the output string can be up to the same length as the input (worst case: no repeats).

---

## ⭐ Revision Notes

- Don't forget to **flush the final run** after the loop ends — the last character's count is easy to miss since there's no "next different character" to trigger the emit.
- Some RLE variants omit the count when it equals 1 (e.g., "ABCD" stays "ABCD" instead of "A1B1C1D1") — clarify this convention before implementing.
- This problem is a gentle introduction to compression algorithms, which reappear in more advanced forms later.

---

---

# Q042 – Remove Duplicate Characters

## 📖 Concept

This problem simulates a username validator that strips repeated characters from a string, keeping only the first occurrence of each character, in the order they first appear. A **set** is used to efficiently track which characters have already been seen, allowing an O(1) membership check per character.

---

## 📝 Algorithm

1. Initialize an empty set `seen = {}` and an empty string `result = ""`.
2. For each character `c` in `S`:
    - If `c` is not in `seen`:
        - Add `c` to `result`.
        - Add `c` to `seen`.
    - Else → skip (already seen).
3. Print `result`.

---

## 💡 Dry Run

Input: `S = 'hello'`

| Char | In seen? | Action | result | seen |
| --- | --- | --- | --- | --- |
| h | No | add | h | {h} |
| e | No | add | he | {h,e} |
| l | No | add | hel | {h,e,l} |
| l | Yes | skip | hel | {h,e,l} |
| o | No | add | helo | {h,e,l,o} |

Output: `helo`

---

## 📚 Concepts Learned

- Set Data Structure
- String Traversal
- First-Occurrence Tracking
- Membership Checking

---

## ⏱ Time Complexity

**O(L)** — each character is checked and inserted into the set at most once, and set operations are O(1) average case.

## 💾 Space Complexity

**O(L)** — worst case, all characters are unique and stored in both `seen` and `result`.

---

## ⭐ Revision Notes

- Using a **set** for the "seen" check gives O(1) average lookup — using a list instead would make this O(L²) in the worst case.
- Order matters: only the **first** occurrence of each character is kept, later duplicates are dropped — don't sort or reorder the output.
- This set-based "seen tracker" pattern is extremely common across string and array problems — memorize it as a reusable template.

---

# 📌 Module Cheat Sheet

## Important Formulas & Patterns

```
Vowel Check:
  c in {a, e, i, o, u} → vowel, else consonant (skip spaces)

Reverse String:
  Built-in:  S[::-1]
  Manual:    reversed = c + reversed   for each c in S

Palindrome Check:
  normalise(S) == reverse(normalise(S))
  normalise = lowercase + remove spaces/punctuation

Anagram Check:
  sorted(A) == sorted(B)          -> O(n log n)
  frequencyMap(A) == frequencyMap(B) -> O(n)

Word Frequency:
  split S by spaces
  compare lowercase(word) == lowercase(W)

Caesar Cipher:
  Encode: new = chr((ord(c) - ord('A') + K) % 26 + ord('A'))
  Decode: new = chr((ord(c) - ord('A') - K + 26) % 26 + ord('A'))

Run-Length Encoding:
  walk string, count consecutive repeats
  emit char + count on change; flush final run after loop

Remove Duplicates:
  seen = set()
  keep c only if c not in seen; add c to seen
```

## Common Patterns in This Module

- **Character-by-character iteration** is the backbone of almost every string problem in this module.
- **Set-based "seen" tracking** (Remove Duplicates) is a reusable pattern for uniqueness/first-occurrence problems.
- **Normalisation before comparison** (lowercase, strip spaces) is essential for Palindrome, Anagram, and Word Frequency problems — always normalise first.
- **ASCII arithmetic with modulo** (Caesar Cipher) is the standard technique for character-shifting and wraparound logic.
- **Run/streak counting** (Run-Length Encoding) requires care to flush the final group after the loop ends — a very common miss.
- **Function reuse** continues here too — Palindrome Check reuses Reverse String logic directly.

---

# 📊 Time Complexity Summary

| Problem | Time Complexity |
| --- | --- |
| Count Vowels and Consonants | O(L) |
| Reverse a String | O(L) |
| Check Palindrome String | O(L) |
| Check Anagram (sorting) | O(n log n) |
| Check Anagram (frequency map) | O(n) |
| Count Word Frequency | O(L) |
| Caesar Cipher Encoder and Decoder | O(L) |
| Run-Length Encoding | O(L) |
| Remove Duplicate Characters | O(L) |

---

# 🎯 Common Interview Mistakes

- Using a list instead of a set for vowel/character lookups, making checks slower than necessary.
- Forgetting to skip spaces (or other non-letter characters) when categorising vowels/consonants.
- Relying only on built-in slicing for string reversal when the interviewer explicitly disallows built-ins.
- Comparing a palindrome candidate without normalising case and spaces first (missing sentence-style palindromes).
- Assuming two strings are anagrams without first checking they have equal length (an easy early-exit check).
- Forgetting to lowercase both the sentence's words and the target word in Word Frequency counting.
- Getting the Caesar Cipher decode formula wrong by omitting the `+26` before the modulo, causing negative results in some languages.
- Not preserving non-alphabetic characters (spaces, punctuation) unshifted in the Caesar Cipher.
- Forgetting to flush/emit the final run of characters after the loop ends in Run-Length Encoding.
- Emitting a count for single-occurrence characters when the RLE convention says to omit the number for count=1.
- Using a list instead of a set for the "seen" tracker in Remove Duplicate Characters, causing unnecessary O(L²) behavior.
- Reordering or sorting output in Remove Duplicate Characters instead of preserving first-occurrence order.

---

# 📝 Key Takeaways

- This module builds fluency with **string traversal and character-level logic** — the same character-by-character loop pattern reappears in nearly every problem.
- **Normalisation** (lowercasing, removing spaces/punctuation) is a recurring first step before comparing strings — get in the habit of doing it upfront.
- **Sets** are the go-to data structure for membership/uniqueness checks in strings — always prefer them over lists for O(1) lookups.
- **Function reuse** remains a theme: Reverse String feeds directly into Palindrome Check.
- **ASCII/character-code arithmetic** (Caesar Cipher) is a foundational skill for any problem involving character shifting or encoding.
- Edge cases to always test: empty strings, single-character strings, strings with no vowels, and strings with all identical characters.
