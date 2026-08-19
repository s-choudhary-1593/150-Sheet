# 📙 Sprint 1 – Conditionals & Logic

**Questions Covered:** Q017 – Q024

---

# Q017 – Largest of Three Numbers

## 📖 Concept

Given three numbers A, B, and C, we need to find which one is the largest. This is done using a chain of `if-elif-else` conditions. The key challenge is handling ties correctly — when two or all three numbers are equal, any one of the equal values is a valid answer. This problem builds the habit of thinking through every possible case (including negatives and equal values), not just the "obvious" distinct-number case.

---

## 📝 Algorithm

1. Read three numbers `A`, `B`, `C`.
2. If `A >= B` and `A >= C`, then `A` is the largest.
3. Else if `B >= A` and `B >= C`, then `B` is the largest.
4. Else, `C` is the largest.
5. Print the largest value.

---

## 💡 Dry Run

Input: `A = 10, B = 25, C = 17`

| Condition Checked | Result |
| --- | --- |
| A >= B and A >= C → 10>=25? | False |
| B >= A and B >= C → 25>=10 and 25>=17? | True |
| Largest | 25 |

Input: `A = 5, B = 5, C = 5`

| Condition Checked | Result |
| --- | --- |
| A >= B and A >= C → 5>=5 and 5>=5? | True |
| Largest | 5 |

---

## 📚 Concepts Learned

- Variables
- if-elif-else
- Comparison Operators
- Logical AND
- Edge Case Handling (ties, negatives)

---

## ⏱ Time Complexity

**O(1)** — a fixed number of comparisons are made regardless of input size.

## 💾 Space Complexity

**O(1)** — only three variables are stored, no extra memory used.

---

## ⭐ Revision Notes

- Use `>=` (not `>`) so that ties are handled automatically.
- Always use `and` (not `or`) when checking "greater than both others."
- Negative numbers: "largest" simply means closest to positive infinity, e.g., -1 > -5.
- Order of conditions matters — always confirm a value against **both** other values before declaring it the largest.

---

---

# Q018 – Leap Year Checker

## 📖 Concept

A leap year has 366 days instead of 365, with an extra day added to February. The rule is: a year is a leap year if it is divisible by 4 **and** (not divisible by 100 **or** divisible by 400). This is a classic case where the order and grouping of conditions changes the result — century years like 1900 are NOT leap years unless they are also divisible by 400 (like 2000).

---

## 📝 Algorithm

1. Read year `Y`.
2. Check if `Y % 4 == 0`.
3. If true, check if `Y % 100 == 0`.
4. If also divisible by 100, check if `Y % 400 == 0`.
5. If divisible by 400 → Leap Year.
6. If divisible by 100 but not 400 → Not a Leap Year.
7. If divisible by 4 but not 100 → Leap Year.
8. If not divisible by 4 → Not a Leap Year.

---

## 💡 Dry Run

| Year | %4==0? | %100==0? | %400==0? | Result |
| --- | --- | --- | --- | --- |
| 2024 | Yes | No | — | Leap Year |
| 1900 | Yes | Yes | No | Not a Leap Year |
| 2000 | Yes | Yes | Yes | Leap Year |

---

## 📚 Concepts Learned

- Nested if-else
- Modulus Operator
- Logical AND / OR
- Rule-based Decision Making

---

## ⏱ Time Complexity

**O(1)** — constant number of modulus checks regardless of input value.

## 💾 Space Complexity

**O(1)** — only the year variable is stored.

---

## ⭐ Revision Notes

- Formula: `(Y%4==0 and Y%100!=0) or (Y%400==0)`
- The "divisible by 400" rule **overrides** the "divisible by 100" exception.
- Common trap: forgetting the century-year exception entirely.
- Always test boundary years: 1900 (not leap), 2000 (leap), 2024 (leap).

---

---

# Q019 – Grade Calculator

## 📖 Concept

A school auto-grading system converts a numeric score into a letter grade using fixed ranges: 90–100 = A, 75–89 = B, 60–74 = C, 50–59 = D, and below 50 = F. The trickiest part of this problem is handling the boundary values correctly — an incorrect `>` instead of `>=` (or vice versa) at a threshold can silently misgrade students.

---

## 📝 Algorithm

1. Read score `S`.
2. If `S >= 90` → Grade A.
3. Else if `S >= 75` → Grade B.
4. Else if `S >= 60` → Grade C.
5. Else if `S >= 50` → Grade D.
6. Else → Grade F.

---

## 💡 Dry Run

| Score | Condition Matched | Grade |
| --- | --- | --- |
| 92 | S >= 90 | A |
| 75 | S >= 75 (fails A, matches B) | B |
| 49 | fails all above | F |

---

## 📚 Concepts Learned

- if-elif-else Chains
- Range-based Conditions
- Boundary Value Testing

---

## ⏱ Time Complexity

**O(1)** — at most 4 comparisons regardless of score value.

## 💾 Space Complexity

**O(1)** — only the score variable is stored.

---

## ⭐ Revision Notes

- Always check ranges from **highest to lowest** using `elif` — this avoids overlapping conditions.
- Boundary values (75, 90, 60, 50) must be tested explicitly; they are the most common bug source.
- Using `if` instead of `elif` for each branch would require extra range checks (e.g., `S>=75 and S<90`) — `elif` avoids this redundancy.

---

---

# Q020 – Triangle Validity and Type

## 📖 Concept

Given three side lengths A, B, and C, we must first verify that they can actually form a triangle, then classify its type. A valid triangle requires that the sum of any two sides is strictly greater than the third side. Once validity is confirmed, the triangle is classified as Equilateral (all sides equal), Isosceles (exactly two sides equal), or Scalene (all sides different). This problem trains you to separate **validation logic** from **classification logic**.

---

## 📝 Algorithm

1. Read sides `A`, `B`, `C`.
2. Check validity:
    
    ```
    A + B > C  and  B + C > A  and  A + C > B
    ```
    
3. If not valid → print "Not a valid triangle" and stop.
4. If valid, check type:
    - If `A == B == C` → Equilateral.
    - Else if any two sides are equal → Isosceles.
    - Else → Scalene.

---

## 💡 Dry Run

Input: `A=3, B=3, C=5`

| Check | Result |
| --- | --- |
| 3+3 > 5 | True |
| 3+5 > 3 | True |
| 3+5 > 3 | True |
| Valid Triangle? | Yes |
| A==B==C? | No |
| Any two equal? (A==B) | Yes |
| Type | Isosceles |

Input: `A=1, B=2, C=10`

| Check | Result |
| --- | --- |
| 1+2 > 10 | False |
| Valid Triangle? | No |
| Output | Not a valid triangle |

---

## 📚 Concepts Learned

- Multiple Logical Conditions (AND)
- Nested Conditionals
- Two-Stage Validation (validity then classification)
- Equality Comparisons

---

## ⏱ Time Complexity

**O(1)** — a fixed number of comparisons regardless of side values.

## 💾 Space Complexity

**O(1)** — only three side variables are stored.

---

## ⭐ Revision Notes

- The triangle inequality must hold for **all three** pairings, not just one.
- Always validate the triangle **before** checking its type — an invalid triangle has no "type."
- Equilateral is a special case of Isosceles — check Equilateral first to avoid misclassification.
- Watch for degenerate cases where `A+B == C` — this is **not** a valid triangle (must be strictly greater).

---

---

# Q021 – Simple Calculator with Error Handling

## 📖 Concept

This problem builds a basic calculator that reads two numbers and an operator (`+`, `-`, `*`, `/`, `%`), then performs the corresponding operation. The important addition here is **defensive programming**: instead of letting the program crash on division or modulus by zero, it should detect this case and print a clean error message.

---

## 📝 Algorithm

1. Read `A`, operator `op`, `B`.
2. If `op == '+'` → result = A + B.
3. Else if `op == '-'` → result = A - B.
4. Else if `op == '*'` → result = A * B.
5. Else if `op == '/'`:
    - If `B == 0` → print "Error: Division by zero".
    - Else → result = A / B.
6. Else if `op == '%'`:
    - If `B == 0` → print "Error: Division by zero".
    - Else → result = A % B.
7. Else → print "Invalid Operator".

---

## 💡 Dry Run

| A | op | B | Check | Output |
| --- | --- | --- | --- | --- |
| 10 | + | 5 | — | 15 |
| 10 | / | 0 | B==0 | Error: Division by zero |
| 17 | % | 5 | B!=0 | 2 |

---

## 📚 Concepts Learned

- if-elif-else Chains
- Character/String Comparison
- Defensive Programming
- Error Handling
- Modulus and Division Operators

---

## ⏱ Time Complexity

**O(1)** — a single arithmetic operation is performed per call.

## 💾 Space Complexity

**O(1)** — only the input variables and result are stored.

---

## ⭐ Revision Notes

- Always check `B == 0` **before** performing `/` or `%` — this prevents runtime crashes.
- Handle an unrecognized operator gracefully with a fallback "Invalid Operator" message.
- This is the first step towards writing robust, crash-proof code — a skill heavily tested in interviews.
- Division and modulus by zero are undefined mathematically, not just a programming quirk.

---

---

# Q022 – Temperature Scale Converter

## 📖 Concept

This problem converts a temperature value from one scale (Celsius, Fahrenheit, or Kelvin) into the other two scales. The core formulas are `F = (C × 9/5) + 32` and `K = C + 273.15`. Since the input scale can be any of the three, the program needs one conditional branch per input scale, converting first to Celsius (as a common reference point) and then to the remaining two scales.

---

## 📝 Algorithm

1. Read temperature `T` and `scale`.
2. If `scale == 'C'`:
    - `F = (T × 9/5) + 32`
    - `K = T + 273.15`
3. Else if `scale == 'F'`:
    - `C = (T − 32) × 5/9`
    - `K = C + 273.15`
4. Else if `scale == 'K'`:
    - `C = T − 273.15`
    - `F = (C × 9/5) + 32`
5. Print the two converted values.

---

## 💡 Dry Run

Input: `T=100, scale=C`

| Formula | Calculation | Result |
| --- | --- | --- |
| F | (100×9/5)+32 | 212.0 |
| K | 100+273.15 | 373.15 |

Input: `T=0, scale=K`

| Formula | Calculation | Result |
| --- | --- | --- |
| C | 0−273.15 | -273.15 |
| F | (-273.15×9/5)+32 | -459.67 |

---

## 📚 Concepts Learned

- if-elif-else Branching
- Formula Application
- Floating Point Arithmetic
- Multi-Case Conversion Logic

---

## ⏱ Time Complexity

**O(1)** — a fixed number of arithmetic operations regardless of input.

## 💾 Space Complexity

**O(1)** — only the temperature and converted values are stored.

---

## ⭐ Revision Notes

- Memorize the two core formulas:
    
    ```
    F = (C × 9/5) + 32
    K = C + 273.15
    ```
    
- Converting through Celsius as a common intermediate scale simplifies the logic.
- Absolute zero (0 K) equals -273.15°C and -459.67°F — a useful sanity check.
- Be careful with integer vs. floating-point division (9/5 must be treated as a decimal, not integer division).

---

---

# Q023 – FizzBuzz

## 📖 Concept

FizzBuzz is the most famous interview warm-up problem. For every number from 1 to N: print "Fizz" if divisible by 3, "Buzz" if divisible by 5, "FizzBuzz" if divisible by both, and the number itself otherwise. The critical trap is condition **ordering** — divisibility by 15 (both 3 and 5) must be checked **first**, otherwise the "divisible by 3" check will fire first and the FizzBuzz case will never be reached.

---

## 📝 Algorithm

1. Loop `i` from `1` to `N`.
2. If `i % 15 == 0` → print "FizzBuzz".
3. Else if `i % 3 == 0` → print "Fizz".
4. Else if `i % 5 == 0` → print "Buzz".
5. Else → print `i`.

---

## 💡 Dry Run

For **N = 15**

| i | i%15==0? | i%3==0? | i%5==0? | Output |
| --- | --- | --- | --- | --- |
| 3 | No | Yes | — | Fizz |
| 5 | No | No | Yes | Buzz |
| 15 | Yes | — | — | FizzBuzz |

Full Output:

```
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz
```

---

## 📚 Concepts Learned

- for Loop
- Modulus Operator
- Conditional Ordering
- Combined Divisibility Checks

---

## ⏱ Time Complexity

**O(N)** — because the loop runs from 1 to N once.

## 💾 Space Complexity

**O(1)** — only the loop counter is stored (excluding output).

---

## ⭐ Revision Notes

- **Always check divisibility by 15 first** — this is the single most common mistake in this problem.
- Equivalent alternative: check `i%3==0 and i%5==0` first, then `i%3==0`, then `i%5==0`.
- FizzBuzz is really a lesson in **condition ordering**, not just modulus operations.
- Can be extended (FizzBuzz variants) by adding more divisors — same ordering principle applies (check the most restrictive/combined condition first).

---

---

# Q024 – Voter Eligibility – Multiple Conditions

## 📖 Concept

This problem checks whether a person is eligible to vote based on three independent rules: the person must be 18 years or older, **AND** be a citizen, **AND** must not be disqualified. Rather than just printing "Eligible" or "Not Eligible," the program identifies the **specific reason** for rejection, which requires checking conditions in a sensible priority order and combining logical AND with clear, distinct messages.

---

## 📝 Algorithm

1. Read age `A`, citizenship `C` (1 = yes, 0 = no), disqualification `D` (1 = yes, 0 = no).
2. If `A < 18` → print "Not Eligible - Too young".
3. Else if `C == 0` → print "Not Eligible - Not a citizen".
4. Else if `D == 1` → print "Not Eligible - Disqualified".
5. Else → print "Eligible".

---

## 💡 Dry Run

| A | C | D | Check Order | Result |
| --- | --- | --- | --- | --- |
| 20 | 1 | 0 | A>=18, C==1, D==0 | Eligible |
| 17 | 1 | 0 | A<18 → matched first | Not Eligible - Too young |
| 25 | 1 | 1 | A>=18, C==1, D==1 | Not Eligible - Disqualified |

---

## 📚 Concepts Learned

- Logical AND
- if-elif-else with Specific Messages
- Multi-Condition Validation
- Priority-based Condition Checking

---

## ⏱ Time Complexity

**O(1)** — a fixed number of checks regardless of input values.

## 💾 Space Complexity

**O(1)** — only three flag/value variables are stored.

---

## ⭐ Revision Notes

- Check conditions in a logical priority order (age → citizenship → disqualification) so the most relevant rejection reason is reported.
- Combining conditions with AND doesn't mean you lose the ability to give specific feedback — check them **sequentially**, not all at once, when specific reasons are needed.
- Boolean-style inputs (0/1) should be clearly documented (1 = yes, 0 = no) to avoid ambiguity.
- A person can fail multiple rules at once — the algorithm reports only the **first** failing rule it checks.

---

# 📌 Module Cheat Sheet

## Important Formulas & Conditions

```
Largest of Three:
  if A >= B and A >= C → A is largest
  elif B >= A and B >= C → B is largest
  else → C is largest

Leap Year:
  (Y % 4 == 0 and Y % 100 != 0) or (Y % 400 == 0)

Grade Ranges:
  90-100 → A
  75-89  → B
  60-74  → C
  50-59  → D
  <50    → F

Triangle Validity:
  A + B > C  and  B + C > A  and  A + C > B

Triangle Type:
  A==B==C            → Equilateral
  exactly two equal   → Isosceles
  all different       → Scalene

Division/Modulus Safety:
  if B == 0 → print "Error: Division by zero"

Temperature Conversion:
  F = (C × 9/5) + 32
  K = C + 273.15

FizzBuzz Order:
  check %15 first, then %3, then %5

Voter Eligibility:
  Eligible = (Age >= 18) AND (Citizen == 1) AND (Disqualified == 0)
```

## Common Patterns in This Module

- **Chained if-elif-else** for mutually exclusive ranges (Grade Calculator, FizzBuzz).
- **Two-stage validation** — check validity first, then classify (Triangle problem).
- **Defensive programming** — guard against divide-by-zero before performing an operation.
- **Priority-ordered conditions** — most specific/restrictive condition checked first (FizzBuzz's %15, Voter's age check).
- **Boundary testing** — always test the exact threshold values (grade cutoffs, leap year century years).

---

# 📊 Time Complexity Summary

| Problem | Time Complexity |
| --- | --- |
| Largest of Three Numbers | O(1) |
| Leap Year Checker | O(1) |
| Grade Calculator | O(1) |
| Triangle Validity and Type | O(1) |
| Simple Calculator with Error Handling | O(1) |
| Temperature Scale Converter | O(1) |
| FizzBuzz | O(N) |
| Voter Eligibility - Multiple Conditions | O(1) |

---

# 🎯 Common Interview Mistakes

- Using `>` instead of `>=` in the Largest of Three problem, breaking tie cases.
- Forgetting the century-year exception (÷100) in the Leap Year rule.
- Forgetting that ÷400 overrides the ÷100 exception, misclassifying years like 2000.
- Using `if` instead of `elif` for grade ranges, causing overlapping/incorrect matches.
- Not testing exact boundary values (75, 90, 60, 50) in the Grade Calculator.
- Checking triangle type before confirming triangle validity.
- Treating `A+B == C` as a valid triangle (it is not — must be strictly greater).
- Not checking for Equilateral before Isosceles, causing misclassification.
- Forgetting to guard against division/modulus by zero in the calculator problem.
- Not handling an invalid/unrecognized operator in the calculator problem.
- Using integer division instead of floating-point division in temperature formulas (9/5 truncating to 0).
- Checking divisibility by 3 before 15 in FizzBuzz, so FizzBuzz never prints.
- Checking all voter conditions with a single AND instead of sequential checks, losing the ability to report a specific rejection reason.
- Confusing 0/1 flag meanings (citizenship, disqualification) due to poor documentation.
- Not printing any output at all when no condition matches (missing a final `else`).

---

# 📝 Key Takeaways

- This module is fundamentally about **decision-making with conditionals** — the exact logic and ordering of `if-elif-else` chains determines correctness.
- **Boundary values** are where most real bugs hide — always dry-run the exact threshold inputs (75, 90, 1900, 2000, 0).
- **Order of conditions matters**: check the most specific/restrictive condition first (÷15 before ÷3, ÷400 before ÷100).
- **Defensive programming** (checking for zero before division/modulus) is a core interview expectation, not an optional extra.
- Separate **validation** from **classification** when a problem has two logical stages (e.g., Triangle Validity and Type).
- All problems in this module run in **O(1)** time except FizzBuzz, which is **O(N)** due to the loop over 1 to N.
- Mastering clean conditional logic here builds the foundation for more complex control-flow problems in later sprints.
