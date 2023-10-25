# 0x08. C - Recursion

## Introduction

This repository contains exercises and examples related to the concept of recursion in the C programming language. Recursion is a powerful and elegant technique used to solve problems by breaking them down into smaller, similar sub-problems. This README provides an overview of the contents and structure of this repository.

## Table of Contents

1. [Description](#description)
2. [Requirements](#requirements)
3. [Getting Started](#getting-started)
4. [Compilation](#compilation)
5. [List of Functions](#list-of-functions)
6. [Usage](#usage)
7. [Examples](#examples)
8. [Testing](#testing)
9. [Authors](#authors)
10. [License](#license)

## Description

Recursion is a fundamental concept in computer science and programming, and it can be a powerful tool for solving complex problems. This repository contains C programs that demonstrate and practice various aspects of recursion, including understanding the recursive call stack, implementing recursive algorithms, and solving problems using recursive techniques.

## Requirements

To compile and run the programs in this repository, you need:

- A C compiler (e.g., GCC)
- A Linux-based or Unix-like operating system (for most examples)

## Getting Started

1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/your-username/0x08-C-Recursion.git
   ```

2. Navigate to the repository's root directory:

   ```bash
   cd 0x08-C-Recursion
   ```

## Compilation

To compile the C programs, you can use a C compiler such as GCC. For example, to compile a program named `my_recursive_function.c`, use the following command:

```bash
gcc -o my_recursive_function my_recursive_function.c
```

## List of Functions

This repository includes various C programs, each demonstrating a different concept or problem-solving technique related to recursion. Some of the key functions and programs you'll find in this repository include:

- `0-puts_recursion.c`: A function that prints a string followed by a newline using recursion.
- `1-print_rev_recursion.c`: A function that prints a string in reverse using recursion.
- `2-strlen_recursion.c`: A function that calculates the length of a string using recursion.
- `3-factorial.c`: A function that calculates the factorial of a number using recursion.
- `4-pow_recursion.c`: A function that calculates the value of x raised to the power of y using recursion.
- `5-sqrt_recursion.c`: A function that calculates the square root of a number using recursion.
- `6-is_prime_number.c`: A function that checks if a number is prime using recursion.

You can explore and run these programs to learn more about how recursion works and how to implement it in C.

## Usage

Each program can be compiled and executed individually to see the results of the recursive functions in action. After compiling, run the programs as follows:

```bash
./program_name
```

Replace `program_name` with the name of the program you want to run.

## Examples

Here are some examples of how to use the functions and programs in this repository:

### Example 1: Printing a String in Reverse

```c
#include <stdio.h>

void _print_rev_recursion(char *s);

int main(void)
{
    char *str = "Hello, world!";
    _print_rev_recursion(str);
    return (0);
}
```

Compile and run the program to print the string "Hello, world!" in reverse.

### Example 2: Calculating Factorial

```c
#include <stdio.h>

int factorial(int n);

int main(void)
{
    int num = 5;
    int result = factorial(num);
    printf("Factorial of %d is %d\n", num, result);
    return (0);
}
```

Compile and run the program to calculate the factorial of 5.

## Testing

Unit tests and additional test cases can be added to verify the correctness of each function in this repository. You can use testing frameworks like [CUnit](http://cunit.sourceforge.net/) or write custom test cases to ensure that the recursive functions work as expected.

## Authors

- [Your Name](https://github.com/your-username): Author of the README and contributors to this repository.

## License

This repository is licensed under the MIT License - see the [LICENSE](LICENSE) file for details. Feel free to use, modify, and distribute the code in this repository for educational and open-source purposes.
