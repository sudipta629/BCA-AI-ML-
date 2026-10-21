# Number System Problem Solver in C

A beginner-friendly C programming project focused on number system conversion and problem-solving logic.

## About the Project

This project converts a decimal number (Base 10) into an octal number (Base 8) using basic C programming concepts.

## Features

- Decimal to Octal conversion
- Uses `while` loop
- Uses division and modulus operators
- Demonstrates number system logic
- Beginner-friendly implementation
- Handles zero and negative input

## Technologies Used

- C Programming
- Standard Input/Output (`stdio.h`)

## Example

**Input**
```text
Enter a decimal number: 20
```

**Output**
```text
Octal number: 24
```

## Logic

1. Read a decimal number.
2. Divide the number by 8.
3. Calculate the remainder using `%`.
4. Store each remainder in the correct decimal position using `place`.
5. Update the number using integer division `/`.
6. Repeat until the number becomes zero.
7. Display the octal result.

## How to Run

Compile the program:

```bash
gcc decimal_to_octal.c -o decimal_to_octal
```

Run on Windows:

```bash
decimal_to_octal.exe
```

Run on Linux:

```bash
./decimal_to_octal
```

## Learning Goals

- Understand number system conversion
- Practice loops and arithmetic operators
- Improve logical thinking and problem-solving skills

## Future Improvements

- Binary to Decimal conversion
- Octal to Decimal conversion
- Decimal to Binary conversion
- Decimal to Hexadecimal conversion
- Menu-driven number system converter

## Author

Sudipta Biswas

---

**Learning one problem at a time, building stronger programming logic.**
