# Diagonal Difference in Matrix

A simple C program that computes the absolute difference between the sums of the main and secondary diagonals of a square matrix.

## 🧠 Problem Description
Given a square matrix of integers, calculate the absolute difference between the sums of its two diagonals.

### Example
**Input:**
3
11 2 4
4 5 6
10 8 -12


**Output:**
Absolute Diagonal Difference: 15


### Explanation
- Main diagonal: 11 + 5 + (-12) = 4  
- Secondary diagonal: 4 + 5 + 10 = 19  
- |4 - 19| = **15**

## Compilation & Execution
```bash
gcc diagonal_difference.c -o diagonal_difference
./diagonal_difference

