# Fibonacci Recursion Practice

This practice file contains a Fibonacci sequence example using a recursive function in C.

## Purpose

The purpose of this practice is to understand how recursion works and how a function can call itself to solve a repeated problem.

## Development Environment

- Language: C
- IDE: Visual Studio
- OS: Windows

## Main Concepts

- Fibonacci sequence
- Recursive function
- Function call
- Base condition
- Repeated calculation
- Advantages and disadvantages of recursion

## Practice Summary

This program prints Fibonacci numbers from the 1st term to the 12th term.

The function `fibonacci()` calculates each Fibonacci number by calling itself.

```c
return fibonacci(number - 1) + fibonacci(number - 2);
```

The base condition is when the input number is 1 or 2.  
In that case, the function returns 1.

```c
else
    return 1;
```

## Source Code

- `fibonacci_recursion.c`

## What I Practiced

- How to define and call a recursive function
- How to set a base condition in recursion
- How Fibonacci numbers can be calculated recursively
- Why recursion can make code simple but may cause repeated calculations
