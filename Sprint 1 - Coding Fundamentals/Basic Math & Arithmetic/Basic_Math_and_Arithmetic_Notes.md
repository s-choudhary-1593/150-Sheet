# 📙 Sprint 1 – Basic Math & Arithmetic

**Questions Covered:** Q001 – Q008

---

# Q001 – Your First Output - Hello, World!

## 📖 Concept

Every programmer's journey begins with printing text to the screen. This problem introduces the idea of **output** — how a program communicates results to the user. There is no input involved; the goal is simply to understand the `print` (or equivalent) statement in your chosen language, and to confirm that your development environment is set up correctly.

---

## 📝 Algorithm

1. Use the language's output statement (e.g., `print`).
2. Pass the string `"Hello, World!"` to it.
3. Run the program and observe the output.

---

## 💡 Dry Run

| Step | Action | Output |
| --- | --- | --- |
| 1 | Call print("Hello, World!") | Hello, World! |

There is no input and no variation — the output is always the same string.

---

## 📚 Concepts Learned

- Output Statements
- String Literals
- Program Execution Flow

---

## ⏱ Time Complexity

**O(1)** — a single fixed statement is executed.

## 💾 Space Complexity

**O(1)** — no variables or extra memory are used.

---

## ⭐ Revision Notes

- This is a sanity check for your environment/compiler setup, not a logic problem.
- Understand the difference between printing a string literal vs. printing a variable.
- Every language has its own syntax for output — know the one you're using (e.g., `print()`, `System.out.println()`, `cout <<`).

---

---

# Q002 – Arithmetic Operations and Variable Swap

## 📖 Concept

This problem has two parts. First, given two integers A and B, compute the four basic arithmetic operations: sum, difference, product, and quotient. Second, **swap** the values of A and B — first using a temporary third variable, then again without any extra variable using pure arithmetic. Swapping is one of the most fundamental operations in programming and appears constantly in algorithms like sorting.

---

## 📝 Algorithm

**Part 1 – Arithmetic Operations**

1. Read `A` and `B`.
2. Compute `sum = A + B`.
3. Compute `diff = A - B`.
4. Compute `product = A * B`.
5. Compute `quotient = A / B` (integer division).

**Part 2 – Swap using a temporary variable**

1. `temp = A`
2. `A = B`
3. `B = temp`

**Part 3 – Swap without a temporary variable**

1. `A = A + B`
2. `B = A - B`
3. `A = A - B`

---

## 💡 Dry Run

Input: `A = 10, B = 3`

| Operation | Calculation | Result |
| --- | --- | --- |
| Sum | 10 + 3 | 13 |
| Difference | 10 - 3 | 7 |
| Product | 10 × 3 | 30 |
| Quotient | 10 ÷ 3 (integer) | 3 |

Swap without temp variable, Input: `A = 5, B = 10`

| Step | A | B |
| --- | --- | --- |
| Initial | 5 | 10 |
| A = A+B | 15 | 10 |
| B = A-B | 15 | 5 |
| A = A-B | 10 | 5 |

Final: `A = 10, B = 5`

---

## 📚 Concepts Learned

- Variables
- Arithmetic Operators (+, -, ×, ÷)
- Integer Division
- Variable Swapping (with and without a temp variable)

---

## ⏱ Time Complexity

**O(1)** — a fixed number of arithmetic operations regardless of input size.

## 💾 Space Complexity

**O(1)** for the temp-variable swap (one extra variable); **O(1)** for the arithmetic swap (no extra variable at all, but relies on no overflow).

---

## ⭐ Revision Notes

- Integer division truncates (drops) the remainder — `7/2 = 3`, not `3.5`.
- Temp-variable swap is safer and easier to read; always prefer it unless explicitly asked for a swap without extra space.
- Arithmetic swap formula:
    
    ```
    A = A + B
    B = A - B
    A = A - B
    ```
    
- Arithmetic swap can silently overflow for very large numbers — a real caveat in fixed-width integer languages (like C/Java).

---

---

# Q003 – Even or Odd

## 📖 Concept

A number is even if it is exactly divisible by 2, and odd otherwise. This is checked using the modulus operator `%`, which returns the remainder of a division. If `N % 2 == 0`, the number is even; if the remainder is `1` (or non-zero), it is odd. Zero is a special case worth remembering — it is even.

---

## 📝 Algorithm

1. Read `N`.
2. Compute `N % 2`.
3. If the result is `0` → print "Even".
4. Else → print "Odd".

---

## 💡 Dry Run

| N | N % 2 | Result |
| --- | --- | --- |
| 4 | 0 | Even |
| 7 | 1 | Odd |
| 0 | 0 | Even |

---

## 📚 Concepts Learned

- Modulus Operator
- if-else Conditional
- Divisibility Check

---

## ⏱ Time Complexity

**O(1)** — a single modulus operation regardless of input.

## 💾 Space Complexity

**O(1)** — only the input variable is stored.

---

## ⭐ Revision Notes

- Even check formula: `N % 2 == 0`.
- Zero is even — a common edge case interviewers like to ask about.
- The same logic extends to negative numbers: `-4 % 2 == 0` is still Even in most languages.
- This is the building block for many later "alternate" pattern problems (e.g., print even-indexed elements).

---

---

# Q004 – Sum of First N Natural Numbers

## 📖 Concept

This classic problem — famously solved instantly by the mathematician Gauss — asks for the sum of all natural numbers from 1 to N. There are three ways to solve it: a `for` loop accumulator, a `while` loop accumulator, and Gauss's direct formula `N×(N+1)/2`. The `while` loop is introduced here as the second essential loop type, useful when the number of iterations isn't fixed in advance (though here it is, for illustration).

---

## 📝 Algorithm

**Method 1 – for Loop**

1. Initialize `sum = 0`.
2. For `i` from `1` to `N`: `sum += i`.
3. Print `sum`.

**Method 2 – while Loop**

1. Initialize `sum = 0`, `i = 1`.
2. While `i <= N`:
    - `sum += i`
    - `i += 1`
3. Print `sum`.

**Method 3 – Gauss's Formula**

1. Compute `sum = N × (N + 1) / 2`.
2. Print `sum`.

---

## 💡 Dry Run

For **N = 5** (while loop method)

| i | Condition (i<=5) | sum |
| --- | --- | --- |
| 1 | True | 1 |
| 2 | True | 3 |
| 3 | True | 6 |
| 4 | True | 10 |
| 5 | True | 15 |
| 6 | False (loop ends) | — |

Output: `15`

Formula check: `5 × 6 / 2 = 15` ✔

---

## 📚 Concepts Learned

- for Loop
- while Loop
- Accumulator Pattern
- Mathematical Formula Shortcut

---

## ⏱ Time Complexity

**O(N)** for loop-based methods — because the loop runs N times. **O(1)** for the Gauss formula method — a single calculation regardless of N.

## 💾 Space Complexity

**O(1)** for all three methods — only a sum (and loop counter) variable is used.

---

## ⭐ Revision Notes

- Gauss's formula: `sum = N × (N+1) / 2` — always prefer this in production code for O(1) performance.
- `while` loop needs manual increment (`i += 1`) — forgetting it causes an infinite loop.
- `for` loop is preferred when the number of iterations is known in advance; `while` loop is preferred when it depends on a condition.
- Always verify the loop-based result against the formula result during testing.

---

---

# Q005 – Factorial of a Number

## 📖 Concept

The factorial of N (written N!) is the product of all positive integers from 1 to N, i.e., `1×2×3×...×N`. A related problem is finding the smallest factor of N greater than 1, using a `while` loop combined with a `break` statement — looping from 2 upward and immediately breaking out of the loop the moment a divisor is found. If the smallest factor found equals N itself, N is prime.

---

## 📝 Algorithm

**Part 1 – Factorial (for loop)**

1. Initialize `fact = 1`.
2. For `i` from `1` to `N`: `fact *= i`.
3. Print `fact`.

**Part 2 – Smallest Factor (while loop with break)**

1. Initialize `i = 2`.
2. While `i <= N`:
    - If `N % i == 0` → this is the smallest factor; `break`.
    - Else → `i += 1`.
3. If smallest factor `== N` → N is prime.

---

## 💡 Dry Run

Factorial, Input: `N = 5`

| i | fact |
| --- | --- |
| 1 | 1 |
| 2 | 2 |
| 3 | 6 |
| 4 | 24 |
| 5 | 120 |

Output: `120`

Smallest Factor, Input: `N = 7`

| i | N % i | Action |
| --- | --- | --- |
| 2 | 1 | continue |
| 3 | 1 | continue |
| 4 | 3 | continue |
| 5 | 2 | continue |
| 6 | 1 | continue |
| 7 | 0 | break — smallest factor = 7 |

Since smallest factor `== N`, 7 is prime.

---

## 📚 Concepts Learned

- for Loop
- while Loop
- break Statement
- Base Case Handling (0! = 1)
- Divisor-based Prime Check

---

## ⏱ Time Complexity

**O(N)** for factorial — the loop runs N times. **O(N)** worst case for smallest factor (when N is prime, the loop runs all the way up to N).

## 💾 Space Complexity

**O(1)** — only the accumulator/loop variables are stored.

---

## ⭐ Revision Notes

- Base case: `0! = 1` by mathematical definition — a common edge case to forget.
- `break` immediately exits the loop — no further iterations run after it.
- Factorial values grow extremely fast — watch out for integer overflow with larger N (e.g., 20! exceeds most 32-bit integer ranges).
- The smallest-factor trick is a preview of primality testing, refined further in Q006.

---

---

# Q006 – Check Prime Number

## 📖 Concept

A prime number has exactly two divisors: 1 and itself. To check primality efficiently, we only need to test divisors from 2 up to `√N` (since any factor larger than the square root would have a corresponding factor smaller than it). This problem introduces two loop control tools together: `break` (to exit early once a divisor is found) and `continue` (to skip unnecessary checks, such as even numbers after checking 2 separately).

---

## 📝 Algorithm

**Approach 1 – break on divisor found**

1. If `N <= 1` → Not Prime.
2. For `i` from `2` to `√N`:
    - If `N % i == 0` → Not Prime; `break`.
3. If no divisor found → Prime.

**Approach 2 – using continue to skip even numbers**

1. If `N <= 1` → Not Prime.
2. If `N == 2` → Prime.
3. If `N % 2 == 0` → Not Prime.
4. For `i` from `3` to `√N`, step `2`:
    - If `N % i != 0` → `continue` (skip to next odd i).
    - Else → Not Prime; `break`.
5. If loop completes without finding a divisor → Prime.

---

## 💡 Dry Run

Input: `N = 7` (√7 ≈ 2.6)

| i | N % i | Action |
| --- | --- | --- |
| 2 | 1 | no divisor, loop ends (i > √7) |

Result: Prime

Input: `N = 12` (√12 ≈ 3.4)

| i | N % i | Action |
| --- | --- | --- |
| 2 | 0 | divisor found → break |

Result: Not Prime

---

## 📚 Concepts Learned

- for Loop
- break Statement
- continue Statement
- sqrt() Optimization
- Number Theory (Divisibility)

---

## ⏱ Time Complexity

**O(√N)** — because we only check divisors up to the square root of N.

## 💾 Space Complexity

**O(1)** — only the loop counter is stored.

---

## ⭐ Revision Notes

- Special edge cases: `N <= 1` is **never** prime; `N == 2` is the only even prime.
- Checking only up to `√N` (instead of `N`) is the key optimization — factors come in pairs, so no new information exists beyond the square root.
- `continue` skips only the current iteration's remaining code, not the entire loop.
- `break` exits the loop entirely — useful once a definitive answer (divisor found) is known.

---

---

# Q007 – GCD - Greatest Common Divisor (Euclidean Algorithm)

## 📖 Concept

The GCD (Greatest Common Divisor) of two numbers A and B is the largest number that divides both exactly. The Euclidean Algorithm — one of the oldest and most elegant algorithms in mathematics, over 2300 years old — computes this using the recursive relationship `GCD(A, B) = GCD(B, A % B)`, stopping when B becomes 0, at which point A is the GCD.

---

## 📝 Algorithm

1. Read `A`, `B`.
2. While `B != 0`:
    - `temp = B`
    - `B = A % B`
    - `A = temp`
3. When `B == 0`, `A` is the GCD.

(Recursive form: `GCD(A, B) = B==0 ? A : GCD(B, A % B)`)

---

## 💡 Dry Run

Input: `A = 48, B = 18`

| A | B | A % B |
| --- | --- | --- |
| 48 | 18 | 12 |
| 18 | 12 | 6 |
| 12 | 6 | 0 |
| 6 | 0 | — (stop) |

Output: `GCD = 6`

---

## 📚 Concepts Learned

- Modulus Operator
- while Loop / Recursion
- Euclidean Algorithm
- Number Theory

---

## ⏱ Time Complexity

**O(log(min(A, B)))** — the Euclidean algorithm reduces the numbers very quickly (logarithmically), much faster than checking every possible divisor.

## 💾 Space Complexity

**O(1)** iterative; **O(log(min(A,B)))** recursive (call stack depth).

---

## ⭐ Revision Notes

- Core formula: `GCD(A, B) = GCD(B, A % B)`, base case `B == 0 → return A`.
- Works for any pair of non-negative integers, including when one of them is 0 (`GCD(A, 0) = A`).
- Co-prime numbers (no common factor other than 1) will have `GCD = 1` (e.g., GCD(7, 13) = 1).
- This algorithm is reused as a building block for LCM (see Q008) — a classic example of function composition.

---

---

# Q008 – LCM - Least Common Multiple

## 📖 Concept

The LCM (Least Common Multiple) of two numbers is the smallest number that both A and B divide into evenly. Rather than searching for it directly, we use the elegant relationship between GCD and LCM: `LCM(A, B) = (A × B) / GCD(A, B)`. This reuses the GCD function built in Q007 — a great example of function composition, where a bigger tool is built from a smaller, already-solved one.

---

## 📝 Algorithm

1. Read `A`, `B`.
2. Compute `g = GCD(A, B)` (reuse Euclidean Algorithm).
3. Compute `LCM = (A × B) / g`.
4. Print `LCM`.

---

## 💡 Dry Run

Input: `A = 4, B = 6`

| Step | Calculation | Result |
| --- | --- | --- |
| GCD(4,6) | Euclidean steps → | 2 |
| LCM | (4×6)/2 | 12 |

Input: `A = 12, B = 18`

| Step | Calculation | Result |
| --- | --- | --- |
| GCD(12,18) | Euclidean steps → | 6 |
| LCM | (12×18)/6 | 36 |

---

## 📚 Concepts Learned

- Function Reuse / Composition
- GCD-LCM Relationship
- Arithmetic Operators

---

## ⏱ Time Complexity

**O(log(min(A, B)))** — dominated by the GCD computation; the final multiplication/division is O(1).

## 💾 Space Complexity

**O(1)** — only a few variables are stored (excluding GCD's own recursive stack, if used).

---

## ⭐ Revision Notes

- Core formula: `LCM(A, B) = (A × B) / GCD(A, B)`.
- Always compute GCD first — LCM depends entirely on it.
- For co-prime numbers (GCD = 1), LCM is simply `A × B` (e.g., LCM(7,5) = 35).
- Watch for overflow: computing `A × B` first before dividing can exceed integer limits for large inputs — safer alternative: `(A / GCD) × B`.

---

# 📌 Module Cheat Sheet

## Important Formulas & Conditions

```
Even/Odd Check:
  N % 2 == 0 → Even
  else       → Odd

Sum of First N Natural Numbers:
  Loop:   sum += i  for i in 1..N
  Formula: sum = N × (N + 1) / 2

Factorial:
  fact = 1
  fact *= i   for i in 1..N
  Base case: 0! = 1

Prime Check:
  N <= 1        → Not Prime
  N == 2        → Prime
  loop i = 2 to √N:
    if N % i == 0 → Not Prime
  else → Prime

GCD (Euclidean Algorithm):
  GCD(A, B) = B==0 ? A : GCD(B, A % B)

LCM:
  LCM(A, B) = (A × B) / GCD(A, B)

Swap (with temp):
  temp = A; A = B; B = temp

Swap (without temp):
  A = A + B
  B = A - B
  A = A - B
```

## Common Patterns in This Module

- **Accumulator pattern** — repeatedly adding/multiplying into a running variable (sum, factorial).
- **Loop + break** — exit immediately once an answer is found (smallest factor, prime check).
- **Loop + continue** — skip unnecessary iterations (skipping even numbers in prime check).
- **Function composition** — building LCM on top of an already-solved GCD function.
- **Formula shortcuts** — replacing an O(N) loop with an O(1) or O(log N) direct formula (Gauss sum, GCD/LCM relationship).
- **√N optimization** — reducing loop range from N to √N wherever only factor-pairs matter.

---

# 📊 Time Complexity Summary

| Problem | Time Complexity |
| --- | --- |
| Hello, World! | O(1) |
| Arithmetic Operations and Variable Swap | O(1) |
| Even or Odd | O(1) |
| Sum of First N Natural Numbers (loop) | O(N) |
| Sum of First N Natural Numbers (formula) | O(1) |
| Factorial of a Number | O(N) |
| Smallest Factor (while + break) | O(N) worst case |
| Check Prime Number | O(√N) |
| GCD (Euclidean Algorithm) | O(log(min(A,B))) |
| LCM | O(log(min(A,B))) |

---

# 🎯 Common Interview Mistakes

- Forgetting that integer division truncates the remainder (e.g., `7/2 = 3`, not `3.5`).
- Overflowing intermediate variables in the arithmetic swap method for very large numbers.
- Forgetting that `0` is even, not odd, in the Even/Odd check.
- Forgetting to increment the loop variable in a `while` loop, causing an infinite loop.
- Forgetting the base case `0! = 1` in factorial problems.
- Not handling integer overflow for large factorial values (e.g., 20! and beyond).
- Checking divisors up to `N` instead of `√N` in the prime check, making it needlessly slow.
- Forgetting that `N <= 1` is never prime, and that `2` is the only even prime.
- Misusing `continue` vs `break` — `continue` skips one iteration, `break` exits the loop entirely.
- Applying the Euclidean algorithm incorrectly by swapping A and B in the wrong order.
- Computing `A × B` before dividing by GCD in the LCM formula, risking overflow for large inputs.
- Forgetting to reuse the already-built GCD function when computing LCM (rewriting logic unnecessarily).
- Not testing edge cases like `GCD(A, 0)` or co-prime pairs (GCD = 1).

---

# 📝 Key Takeaways

- This module builds the **absolute fundamentals**: output, variables, arithmetic, loops, and basic number theory.
- Understand both **loop-based** and **formula-based** solutions — formulas are more efficient (O(1) or O(log N)) but loops build foundational understanding.
- **break** and **continue** are essential tools for precise control over loop execution — know exactly when each fires.
- The **Euclidean Algorithm** for GCD is a cornerstone of number theory and reappears throughout competitive programming.
- **Function composition** (building LCM from GCD) is a recurring theme — always look for opportunities to reuse already-solved logic.
- Always consider **edge cases**: zero, negative numbers, base cases (0!, GCD with 0), and the smallest prime (2).
- These problems, though simple, train precise thinking about operators (`%`, `/`, `*`) and loop control — skills essential for every later, more complex topic.
