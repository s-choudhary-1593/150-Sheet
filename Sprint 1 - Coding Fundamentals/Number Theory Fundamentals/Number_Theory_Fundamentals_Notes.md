# 📙 Sprint 1 – Number Theory Fundamentals

**Questions Covered:** Q009 – Q016

---

# Q009 – Fibonacci Sequence

## 📖 Concept

The Fibonacci sequence is a series in which each number is the sum of the two numbers before it: `0, 1, 1, 2, 3, 5, 8, 13...`. It appears throughout nature — flower petals, shell spirals — and even in stock market analysis. The first N terms can be printed using a simple loop that only remembers the last two values; no array is required.

---

## 📝 Algorithm

1. Initialize `a = 0`, `b = 1`.
2. Print `a`.
3. Repeat N-1 more times:
    - Compute `c = a + b`.
    - Update `a = b`, `b = c`.
    - Print `a` (the new value).
4. Stop after N terms are printed.

---

## 💡 Dry Run

For **N = 8**

| a | b | c | Printed |
| --- | --- | --- | --- |
| 0 | 1 | 1 | 0 |
| 1 | 1 | 2 | 1 |
| 1 | 2 | 3 | 1 |
| 2 | 3 | 5 | 2 |
| 3 | 5 | 8 | 3 |
| 5 | 8 | 13 | 5 |
| 8 | 13 | 21 | 8 |
| 13 | 21 | 34 | 13 |

Output: `0 1 1 2 3 5 8 13`

Edge case, **N = 1** → Output: `0` (only the first term is printed).

---

## 📚 Concepts Learned

- Variables
- for Loop
- Sequence Generation
- Variable Updating (rolling last two values)

---

## ⏱ Time Complexity

**O(N)** — because the loop runs N times to generate N terms.

## 💾 Space Complexity

**O(1)** — only the last two values are stored, no array needed.

---

## ⭐ Revision Notes

- No array is required — store only the last two numbers (`a` and `b`).
- Each term = previous + previous-previous.
- Always handle `N = 1` as a special/edge case (output is just `0`).
- Fibonacci is the foundation for later recursion and dynamic programming problems.

---

---

# Q010 – Count Digits and Sum of Digits

## 📖 Concept

This problem simulates a PIN validator that checks the digit count and digit-sum checksum of an ID number. Digits are extracted one at a time from the right: the last digit is `N % 10`, and it is removed using integer division `N = N // 10`. This process repeats until N becomes 0, at which point every digit has been counted and summed.

---

## 📝 Algorithm

1. Initialize `count = 0`, `sum = 0`.
2. While `N > 0`:
    - Extract digit: `digit = N % 10`.
    - Add to sum: `sum += digit`.
    - Increase count: `count += 1`.
    - Remove last digit: `N = N // 10`.
3. Print `count` and `sum`.

---

## 💡 Dry Run

Input: `N = 12345`

| Digit | Sum | Count |
| --- | --- | --- |
| 5 | 5 | 1 |
| 4 | 9 | 2 |
| 3 | 12 | 3 |
| 2 | 14 | 4 |
| 1 | 15 | 5 |

Output: `Count = 5, Sum = 15`

Edge case, Input: `N = 1001`

| Digit | Sum | Count |
| --- | --- | --- |
| 1 | 1 | 1 |
| 0 | 1 | 2 |
| 0 | 1 | 3 |
| 1 | 2 | 4 |

Output: `Count = 4, Sum = 2`

---

## 📚 Concepts Learned

- while Loop
- Digit Extraction
- Modulus Operator
- Integer Division

---

## ⏱ Time Complexity

**O(Number of Digits)** — the loop runs once per digit in N.

## 💾 Space Complexity

**O(1)** — only count and sum accumulators are stored.

---

## ⭐ Revision Notes

- Golden rule: **Digit → `%`**, **Remove → `//`**.
- Zero digits inside a number (like in 1001) still count towards the digit count, even though they add nothing to the sum.
- A single-digit number (like `N = 9`) gives `Count = 1, Sum = 9` — a good boundary test.
- This digit-extraction pattern is reused in Reverse Number, Palindrome, and Armstrong Number problems.

---

---

# Q011 – Reverse a Number

## 📖 Concept

This problem simulates a verification system that generates codes by reversing ID numbers. It is a natural `while` loop problem — you don't know in advance how many digits N has, which is exactly the situation where `while` loops are essential (unlike `for` loops, which need a known iteration count upfront). Digits are extracted from the end and rebuilt in reverse order.

---

## 📝 Algorithm

1. Initialize `reverse = 0`.
2. While `N > 0`:
    - Extract last digit: `digit = N % 10`.
    - Append digit: `reverse = reverse × 10 + digit`.
    - Remove last digit: `N = N // 10`.
3. Print `reverse`.

---

## 💡 Dry Run

Input: `N = 12345`

| Digit | Reverse |
| --- | --- |
| 5 | 5 |
| 4 | 54 |
| 3 | 543 |
| 2 | 5432 |
| 1 | 54321 |

Output: `54321`

Edge case, Input: `N = 100`

| Digit | Reverse |
| --- | --- |
| 0 | 0 |
| 0 | 0 |
| 1 | 1 |

Output: `1` (leading zeros in the reversed number are naturally dropped)

---

## 📚 Concepts Learned

- while Loop
- Digit Extraction
- Number Building
- Trailing/Leading Zero Handling

---

## ⏱ Time Complexity

**O(Digits)** — the loop runs once per digit in N.

## 💾 Space Complexity

**O(1)** — only the reverse accumulator is stored.

---

## ⭐ Revision Notes

- Core formula: `reverse = reverse × 10 + digit`.
- Trailing zeros in the original number become leading zeros in the reverse and simply vanish (e.g., 100 → 1).
- A `for` loop cannot naturally express "keep going until N becomes 0" — this is exactly why `while` loops exist.
- Palindromic numbers (like 1221) reverse to themselves — a useful property reused in Q012.

---

---

# Q012 – Check Palindrome Number

## 📖 Concept

A palindrome number reads the same forwards and backwards, such as 121, 1331, or 12321. Rather than writing new logic, this problem reuses the Reverse Number function from Q011 — if the reversed number equals the original number, it is a palindrome. This demonstrates **function reuse**: build small tools once, then use them to build bigger solutions.

---

## 📝 Algorithm

1. Store the original number: `original = N`.
2. Reverse the number using the Q011 logic → `reversed`.
3. Compare: `if original == reversed` → Palindrome.
4. Else → Not Palindrome.

---

## 💡 Dry Run

Input: `N = 121`

| Step | Value |
| --- | --- |
| Original | 121 |
| Reversed | 121 |
| original == reversed? | True |
| Result | Palindrome |

Input: `N = 123`

| Step | Value |
| --- | --- |
| Original | 123 |
| Reversed | 321 |
| original == reversed? | False |
| Result | Not Palindrome |

---

## 📚 Concepts Learned

- Function Reuse
- Reverse Number Logic
- Comparison Operators

---

## ⏱ Time Complexity

**O(Digits)** — dominated by the reverse operation.

## 💾 Space Complexity

**O(1)** — only the original and reversed values are stored.

---

## ⭐ Revision Notes

- Always store the original number **before** reversing — the reverse operation destroys N.
- Reuse the exact Reverse Number logic from Q011 instead of rewriting it.
- Single-digit numbers are always palindromes (they equal their own reverse).
- Larger palindromes like 12321 confirm the logic works for both odd- and even-length numbers.

---

---

# Q013 – Armstrong Number Checker

## 📖 Concept

An Armstrong (or narcissistic) number equals the sum of each of its digits raised to the power of the total digit count. For example, 153 has 3 digits, and `1³ + 5³ + 3³ = 1 + 125 + 27 = 153`. The process requires first counting the digits, then computing each digit raised to that count, and finally comparing the sum to the original number.

---

## 📝 Algorithm

1. Store original number: `original = N`.
2. Count the number of digits → `count`.
3. Initialize `sum = 0`.
4. For each digit of N:
    - Extract digit: `digit = N % 10`.
    - Add `digit ^ count` to `sum`.
    - Remove digit: `N = N // 10`.
5. Compare `sum == original`.
6. If equal → Armstrong; else → Not Armstrong.

---

## 💡 Dry Run

Input: `N = 153` (3 digits)

| Digit | digit³ | Running Sum |
| --- | --- | --- |
| 3 | 27 | 27 |
| 5 | 125 | 152 |
| 1 | 1 | 153 |

`153 == 153` → Armstrong

Input: `N = 9474` (4 digits)

| Digit | digit⁴ | Running Sum |
| --- | --- | --- |
| 4 | 256 | 256 |
| 7 | 2401 | 2657 |
| 4 | 256 | 2913 |
| 9 | 6561 | 9474 |

`9474 == 9474` → Armstrong

---

## 📚 Concepts Learned

- Nested Logic
- pow() / Exponentiation
- Digit Counting
- Digit Extraction

---

## ⏱ Time Complexity

**O(Digits)** — one pass to count digits, one pass to compute the sum.

## 💾 Space Complexity

**O(1)** — only the sum, count, and original number are stored.

---

## ⭐ Revision Notes

- Always count digits **first**, then compute powers — the exponent depends on the total digit count.
- Store the original number separately, since N is destroyed during digit extraction.
- Single-digit numbers are trivially Armstrong numbers (digit¹ = digit).
- Known Armstrong numbers to remember for sanity checks: 153, 370, 371, 407, 9474.

---

---

# Q014 – Perfect Number Checker

## 📖 Concept

A perfect number equals the sum of all its proper divisors (all divisors except the number itself). For example, `6 = 1 + 2 + 3`. Perfect numbers are extremely rare — only 6, 28, 496, and 8128 exist below 10,000. The check is performed by summing all divisors up to `N/2` and comparing the total to N.

---

## 📝 Algorithm

1. Initialize `sum = 0`.
2. For `i` from `1` to `N/2`:
    - If `N % i == 0` → `sum += i`.
3. Compare `sum == N`.
4. If equal → Perfect; else → Not Perfect.

---

## 💡 Dry Run

Input: `N = 28`

| i | N % i == 0? | Sum |
| --- | --- | --- |
| 1 | Yes | 1 |
| 2 | Yes | 3 |
| 4 | Yes | 7 |
| 7 | Yes | 14 |
| 14 | Yes | 28 |

`28 == 28` → Perfect

Input: `N = 12`

| i | N % i == 0? | Sum |
| --- | --- | --- |
| 1 | Yes | 1 |
| 2 | Yes | 3 |
| 3 | Yes | 6 |
| 4 | Yes | 10 |
| 6 | Yes | 16 |

`16 != 12` → Not Perfect

---

## 📚 Concepts Learned

- Divisors
- for Loop
- Accumulator Pattern

---

## ⏱ Time Complexity

**O(N)** — the loop runs up to N/2 times.

## 💾 Space Complexity

**O(1)** — only the sum accumulator is stored.

---

## ⭐ Revision Notes

- Proper divisors **exclude** the number itself — only include divisors up to N/2.
- Perfect numbers are extremely rare — 6, 28, 496, 8128 are the first four; use them to sanity-check your logic.
- This O(N) approach can be optimized to O(√N) using the divisor-pair technique from Q015.
- Don't confuse "proper divisors" with "all divisors" (which would include N itself and always make the sum too large).

---

---

# Q015 – Find All Divisors of a Number

## 📖 Concept

This problem simulates a factory checking whether a batch can be split into equal groups by finding all divisors of a number. A divisor divides N completely with no remainder. The naive approach loops from 1 to N (O(N)), but it can be optimized by looping only up to `√N` — for every divisor `i` found, `N/i` is also a divisor. The perfect-square case (`i == N/i`) must be handled carefully to avoid printing the same divisor twice.

---

## 📝 Algorithm

**Naive Method**

1. Loop `i` from `1` to `N`.
2. If `N % i == 0` → print `i`.

**Optimized Method**

1. Loop `i` from `1` to `√N`.
2. If `N % i == 0`:
    - Print `i` (a divisor).
    - If `i != N/i` → also print `N/i` (its pair).
3. Sort/collect divisors in order if a fully sorted list is required.

---

## 💡 Dry Run

Input: `N = 36` (√36 = 6)

| i | N % i == 0? | Divisor Pair |
| --- | --- | --- |
| 1 | Yes | 1, 36 |
| 2 | Yes | 2, 18 |
| 3 | Yes | 3, 12 |
| 4 | Yes | 4, 9 |
| 6 | Yes | 6, 6 (printed once — perfect square) |

Output: `1 2 3 4 6 9 12 18 36`

Input: `N = 7` (prime)

| i | N % i == 0? | Divisor Pair |
| --- | --- | --- |
| 1 | Yes | 1, 7 |

Output: `1 7`

---

## 📚 Concepts Learned

- Factor Pairs
- sqrt() Optimization
- Loop Optimization

---

## ⏱ Time Complexity

**O(√N)** — for the optimized method, versus O(N) for the naive method.

## 💾 Space Complexity

**O(1)** if only printing; **O(number of divisors)** if storing them in a list.

---

## ⭐ Revision Notes

- Factors always occur in pairs: `i` and `N/i`.
- Always check `i == N/i` (perfect square case) to avoid printing a duplicate divisor.
- Prime numbers have exactly 2 divisors: 1 and themselves — a useful quick sanity check.
- This √N technique is a recurring optimization pattern across many number theory problems (prime check, perfect number, etc.).

---

---

# Q016 – Power of a Number - Iterative and Recursive

## 📖 Concept

This problem computes `Base^Exponent` without using any built-in power function, using two different approaches. The iterative method multiplies the base by itself E times in a loop. The recursive method breaks the problem down using the relationship `power(B, E) = B × power(B, E-1)`, with the base case `power(B, 0) = 1`. Both produce the same result but represent two very different problem-solving mindsets — essential to understand both.

---

## 📝 Algorithm

**Method 1 – Iterative**

1. Initialize `result = 1`.
2. Loop `E` times: `result *= B`.
3. Print `result`.

**Method 2 – Recursive**

1. Base case: if `E == 0` → return `1`.
2. Recursive case: return `B × power(B, E - 1)`.

---

## 💡 Dry Run

Iterative, Input: `B = 3, E = 5`

| Iteration | result |
| --- | --- |
| 1 | 3 |
| 2 | 9 |
| 3 | 27 |
| 4 | 81 |
| 5 | 243 |

Output: `243`

Recursive, Input: `power(2, 3)`

```
power(2,3)
= 2 × power(2,2)
= 2 × (2 × power(2,1))
= 2 × (2 × (2 × power(2,0)))
= 2 × (2 × (2 × 1))
= 8
```

Edge case: `power(5, 0) = 1` (any number to the power 0 is 1 — the base case).

---

## 📚 Concepts Learned

- Iterative Loops
- Recursion
- Base Case Definition
- Recursive Call Stack

---

## ⏱ Time Complexity

**O(E)** for both the iterative and recursive methods — E multiplications are performed either way.

## 💾 Space Complexity

**O(1)** for the iterative method. **O(E)** for the recursive method, due to the call stack depth.

---

## ⭐ Revision Notes

- Always define the base case first in recursion: `power(B, 0) = 1`.
- Iterative approach uses constant space; recursive approach uses stack space proportional to E — an important tradeoff to mention in interviews.
- Off-by-one bug to watch for: looping `E` times, not `E + 1` times, in the iterative version.
- This iterative-vs-recursive pattern (same logic, two implementations) reappears throughout later recursion-focused sprints.

---

# 📌 Module Cheat Sheet

## Important Formulas

```
Fibonacci:
  c = a + b
  a = b
  b = c

Digit Extraction:
  digit = N % 10
  N = N // 10

Reverse Number:
  reverse = reverse × 10 + digit

Palindrome Check:
  original == reverse(original)

Armstrong Number:
  sum += digit ^ digit_count
  Armstrong if sum == original

Perfect Number:
  sum of divisors from 1 to N/2
  Perfect if sum == N

Divisor Pairs (optimized):
  loop i from 1 to √N
  if N % i == 0 → divisors are i and N/i
  if i == N/i → print only once

Power (Iterative):
  result = 1
  result *= B, repeated E times

Power (Recursive):
  power(B, 0) = 1
  power(B, E) = B × power(B, E−1)
```

## Common Patterns in This Module

- **Digit-by-digit extraction** (`% 10` then `// 10`) is the foundation for Count/Sum of Digits, Reverse, Palindrome, and Armstrong problems.
- **Function reuse** — Palindrome reuses Reverse Number; LCM-style composition appears again here with Armstrong reusing digit-counting logic.
- **√N optimization** — used in both Find All Divisors and (in the previous module) Prime Checking, to cut runtime from O(N) to O(√N).
- **Iterative vs. Recursive duality** — Power of a Number shows the same solution expressed two different ways, a pattern that recurs throughout recursion-heavy topics later.
- **Store-before-modify** — always save the original number before it gets destroyed by digit-extraction loops (critical for Palindrome and Armstrong).

---

# 📊 Time Complexity Summary

| Problem | Time Complexity |
| --- | --- |
| Fibonacci Sequence | O(N) |
| Count Digits and Sum of Digits | O(Digits) |
| Reverse a Number | O(Digits) |
| Check Palindrome Number | O(Digits) |
| Armstrong Number Checker | O(Digits) |
| Perfect Number Checker | O(N) |
| Find All Divisors (naive) | O(N) |
| Find All Divisors (optimized) | O(√N) |
| Power of a Number (Iterative) | O(E) |
| Power of a Number (Recursive) | O(E) |

---

# 🎯 Common Interview Mistakes

- Forgetting to store the original number before modifying it in Palindrome and Armstrong checks.
- Using `pow()` incorrectly, or forgetting to count digits first, in the Armstrong problem.
- Printing duplicate divisors for perfect squares (forgetting the `i == N/i` check).
- Writing a recursive power function without a proper base case (`E == 0 → 1`).
- Running the divisor-finding loop till `N` instead of `√N` in the optimized solution.
- Off-by-one errors in iterative power loops (looping `E+1` times instead of `E` times).
- Confusing "proper divisors" (excludes N) with "all divisors" (includes N) in the Perfect Number check.
- Not handling `N = 1` as an edge case in Fibonacci (only one term should print).
- Forgetting that trailing zeros vanish when a number is reversed (e.g., 100 → 1, not 001).
- Ignoring integer overflow risk in recursive power or Fibonacci for very large exponents/terms.
- Rewriting the Reverse Number logic from scratch inside the Palindrome checker instead of reusing it.

---

# 📝 Key Takeaways

- Nearly every problem in this module builds on the same core skill: **digit-by-digit processing** using `%` and `//`.
- **Function reuse** is a recurring theme — Palindrome depends on Reverse, and later modules build on GCD/LCM and digit logic repeatedly.
- The **√N optimization** is one of the most important patterns in number theory — always ask "do I really need to loop to N, or just to √N?"
- Always **store the original value** before a destructive loop modifies it — this single habit prevents a large class of bugs.
- Understanding both **iterative and recursive** formulations of the same problem (Power of a Number) builds intuition for the recursion-heavy topics ahead.
- These problems are individually simple, but together they form the numeric toolbox used repeatedly throughout every later sprint.
