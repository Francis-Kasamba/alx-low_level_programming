# 0x14. C - Bit Manipulation

This directory contains projects and tasks related to bit manipulation in the C programming language. Bit manipulation is a technique used in systems programming to interact with data at the bit level, which is crucial for optimizing performance and resource usage in software.

## Table of Contents

- [Overview](#overview)
- [Requirements](#requirements)
- [File Descriptions](#file-descriptions)
- [Usage](#usage)
- [Author](#author)

## Overview

The goal of this project is to practice and understand various bit manipulation techniques in C. The tasks involve implementing functions that manipulate data at the bit level, including converting binary to unsigned integers, performing bitwise operations, and understanding bit shifts.

## Requirements

- **Editors Allowed**: `vi`, `vim`, `emacs`
- **Compilation**: The code will be compiled on Ubuntu 20.04 LTS using `gcc` with the following options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Style**: The code should follow the Betty style, checked using `betty-style.pl` and `betty-doc.pl`
- **Global Variables**: Usage of global variables is forbidden
- **Library Functions Allowed**: `malloc`, `free`, `exit`
- **File Limitations**: No more than 5 functions per file
- **Header Files**: All prototypes should be included in `main.h`, and the header file should be guarded with `#ifndef` and `#define` directives.

## File Descriptions

- **`main.h`**: Header file containing the prototypes of all functions.
- **`0-binary_to_uint.c`**: Function that converts a binary number to an unsigned int.
- **`0-main.c`**: Main file provided for testing the `binary_to_uint` function (not pushed to the repository).
  
## Usage

To compile and run any of the programs, use the following command:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <file.c> -o <output_file>
```

For example, to compile `0-binary_to_uint.c` with `0-main.c`, you would run:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o binary_to_uint
```

Then, you can execute the output binary:

```bash
./binary_to_uint
```

## Author

This project was completed as part of the ALX Software Engineering Program.

- **Author**:Francis-Kasamba(https://github.com/Francis-Kasamba)

---

