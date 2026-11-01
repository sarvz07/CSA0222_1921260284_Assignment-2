# Assignment 2 Report

## Cover Page
Student Name: D. Sarvesh
Register Number: 1921260284
Course: B. Tech Information Technology
Subject: C Programming
Assignment: CO2 – Assignment 2

## Table of Contents
1. Introduction
2. Q1 – Precedence and associativity
3. Q2 – Short-circuit evaluation
4. Q3 – Bitwise operators
5. Q4 – Decision-making statements
6. Q5 – Prime checking and loops
7. Q6 – Loan repayment and termination
8. Q7 – Day-4 Design Challenge
9. Complexity comparison
10. Test cases and results
11. Final observations
12. Conclusion

## Introduction
This assignment focuses on understanding core C programming concepts and how they are applied in realistic tasks such as billing, verification, device control, grading, prime checking and loan repayment.

## Q1 – Precedence and Associativity
Operator precedence decides the order of evaluation. The pharmacy-billing example shows how a single expression can become unclear and error-prone. The recommended approach is to calculate intermediate values separately before final calculation.

## Q2 – Short-Circuit Evaluation
Short-circuit logic avoids unnecessary checks when the result is already known. This matters when verification is expensive or has side effects.

## Q3 – Bitwise Operators
Bitwise operations let us store multiple device states in one byte. This is efficient and is preferred over storing a separate character for each device.

## Q4 – Decision-Making Statements
The else-if ladder is easy to read. The switch statement is useful with discrete values. A lookup table is fastest when the input range is small and fixed.

## Q5 – Prime Checking and Loops
Prime checking improves significantly when we stop at sqrt(n) and skip even divisors. The number of division operations matters because it scales with the input size.

## Q6 – Loan Repayment and Loop Termination
Loan repayment must terminate safely when the outstanding balance reaches zero. Using a fixed safety limit prevents infinite loops, and the final payment is capped to the remaining balance.

## Q7 – Day-4 Design Challenge
The optimized prime-checking approach reduces loop iterations by excluding even divisors after 2. This improves performance without changing correctness.

## Complexity Comparison
- Q1: O(1) time, O(1) space
- Q2: O(n) time, O(1) space
- Q3: O(1) time, O(1) space
- Q4: O(1) time, O(1) space
- Q5: O(sqrt(n)) for single-check implementations
- Q6: O(months) time, O(1) space
- Q7: approximately half the division operations compared to the original prime-checking method

## Final Observations
The assignment teaches that correct coding is not only about producing output but also about explaining why the algorithm works and how to keep it efficient.

## Conclusion
This repository provides a structured, beginner-friendly solution to all seven questions with alternative implementations, clear documentation and reproducible test cases.
