# 0x15. File I/O

This directory contains tasks related to file input/output operations in C, focusing on working with file descriptors, reading, and writing files.

## Files

### 0-read_textfile.c

This file contains a function `read_textfile` that reads a text file and prints it to the POSIX standard output.

- **Prototype**: `ssize_t read_textfile(const char *filename, size_t letters);`
- **Parameters**:
  - `filename`: The name of the file to read.
  - `letters`: The number of letters it should read and print.
- **Return**:
  - The actual number of letters it could read and print.
  - `0` if the file cannot be opened or read, if `filename` is `NULL`, or if `write` fails or does not write the expected amount of bytes.

### Example Usage

```c
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}

