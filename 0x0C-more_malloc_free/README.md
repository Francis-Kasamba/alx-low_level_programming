# 0x0C. C - More `malloc`, `free`

## Description

In this project, we delve deeper into dynamic memory allocation in C, building on the concepts introduced in previous projects. We explore more advanced uses of the `malloc` and `free` functions, gaining a deeper understanding of memory management in C.

## Concepts Explored

- **Dynamic Memory Allocation:** Understanding and utilizing dynamic memory allocation to manage memory at runtime.
- **`malloc` and `free`:** Exploring the `malloc` function for memory allocation and the `free` function for memory deallocation.
- **Error Handling:** Implementing robust error handling to manage potential issues related to memory allocation.

## Files

- `0-malloc_checked.c`: Allocates memory using `malloc`. Exits with status 98 if allocation fails.
- `1-string_nconcat.c`: Concatenates two strings. Allocates memory using `malloc`.
- `2-calloc.c`: Allocates memory for an array, initializes it with a specific value using `calloc`.
- `3-array_range.c`: Creates an array of integers, containing values from `min` to `max`.
- `100-realloc.c`: Reallocates a memory block using `realloc`.

## Getting Started

To use the provided functions, include the respective header file in your C program:

```c
#include "holberton.h"
```

Compile the source files along with your program:

```bash
gcc your_program.c 0-malloc_checked.c -o your_program
```

## Usage

```c
#include "holberton.h"

int main(void)
{
    char *str;

    str = malloc_checked(1024);
    if (str == NULL)
    {
        /* Handle allocation failure */
        return (1);
    }

    /* Continue with program logic */

    free(str); /* Free allocated memory when done */

    return (0);
}
```

## Compilation

Your program can be compiled with the following flags:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o your_program
```

## Author
FRANCIS KASAMBA

## Acknowledgments

Special thanks to the [Holberton School](https://www.holbertonschool.com/) staff for their guidance and support.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
