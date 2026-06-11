# Two-Dimensional Array Practice

## Overview

This practice is based on two-dimensional arrays in C.

The program uses monthly average temperature data from 2016, 2017, and 2018.  
It stores the data in a two-dimensional array and calculates yearly and monthly average temperatures.

## Learning Objectives

- Understand how to declare and use a two-dimensional array
- Store multiple one-dimensional arrays into a two-dimensional array
- Access array elements using nested loops
- Calculate yearly average temperatures
- Calculate monthly average temperatures over multiple years

## Main Features

- Print monthly temperature data for each year
- Calculate the average temperature of each year
- Calculate the monthly average temperature for three years

## Code Structure

```text
04_Two_Dimensional_Array
├── README.md
└── two_dimensional_array.c
```

## Key Concepts

### 1. Two-Dimensional Array

```c
double arr[YEARS][MONTHS];
```

The array stores temperature data in the following format:

```text
arr[year_index][month_index]
```

### 2. Nested Loop

```c
for (int j = 0; j < YEARS; j++)
{
    for (int i = 0; i < MONTHS; i++)
    {
        sum[j] += arr[j][i];
    }
}
```

Nested loops are used to access each element of the two-dimensional array.

## Program Flow

```text
1. Prepare monthly temperature data for each year
2. Copy one-dimensional arrays into a two-dimensional array
3. Print all temperature data
4. Calculate yearly average temperatures
5. Calculate monthly average temperatures for three years
```

## What I Learned

Through this practice, I learned how to organize related data using a two-dimensional array.

I also practiced using nested loops to calculate averages by year and by month.
