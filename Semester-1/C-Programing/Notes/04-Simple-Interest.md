
# 4. Simple Interest

**Subject:** C Programming  
**Course:** BCA (AI & ML) — Semester 1

---

## 4.1 What Is Simple Interest?

**Definition:** Simple interest is the interest calculated only on the original principal amount for a given period.

## 4.2 Formula of Simple Interest

**SI = (P × R × T) / 100**

Where:

- `SI` = Simple Interest
- `P` = Principal amount
- `R` = Annual rate of interest (percentage)
- `T` = Time in years

### Total Amount Formula

**Amount = Principal + Simple Interest**

`A = P + SI`

Where `A` represents the total amount.

## 4.3 Solved Example

**Problem:** Calculate the simple interest for a principal of ₹1,000 at an annual interest rate of 5% for 2 years.

### Given

- Principal (`P`) = ₹1,000
- Rate (`R`) = 5%
- Time (`T`) = 2 years

### Calculation

Formula:

`SI = (P × R × T) / 100`

Substituting the values:

`SI = (1000 × 5 × 2) / 100`

`SI = 10000 / 100`

`SI = ₹100`

**Answer: Simple Interest = ₹100**

Total Amount:

`A = P + SI`

`A = 1000 + 100 = ₹1,100`

## 4.4 Algorithm to Calculate Simple Interest

1. Start.
2. Declare variables `P`, `R`, `T`, and `SI`.
3. Read the values of `P`, `R`, and `T`.
4. Calculate `SI = (P * R * T) / 100`.
5. Display `SI`.
6. Stop.

## 4.5 Flowchart Sequence

Start → Input `P, R, T` → Calculate `SI = (P × R × T) / 100` → Display `SI` → End

## 4.6 C Program to Calculate Simple Interest

```c
#include <stdio.h>

int main(void)
{
    float p, r, t, si;

    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100;

    printf("Simple Interest = %.2f\n", si);

    return 0;
}
```

### Sample Output

```text
Enter principal, rate and time: 1000 5 2
Simple Interest = 100.00
```

## Important Exam Questions

1. Define simple interest.
2. Write the formula for simple interest.
3. What do P, R, and T represent?
4. Calculate simple interest for given values of P, R, and T.
5. Write an algorithm to calculate simple interest.
6. Draw a flowchart to calculate simple interest.
7. Write a C program to calculate simple interest.
