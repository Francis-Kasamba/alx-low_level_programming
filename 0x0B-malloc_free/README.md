# C Programming: Dynamic Memory Allocation using `malloc` and `free` (0x0B)

## Overview

This README provides a brief introduction and usage guide for dynamic memory allocation in the C programming language, specifically using the `malloc` and `free` functions. Dynamic memory allocation is a fundamental concept in C that allows you to manage memory during the program's execution.

## Table of Contents

1. [Introduction](#introduction)
2. [Malloc Function](#malloc-function)
3. [Free Function](#free-function)
4. [Usage Example](#usage-example)
5. [Best Practices](#best-practices)
6. [Additional Resources](#additional-resources)

## Introduction

In C programming, memory can be allocated in two ways: static and dynamic. While static memory allocation occurs at compile time, dynamic memory allocation happens at runtime. The `malloc` (memory allocation) and `free` functions are used for dynamic memory allocation and deallocation, respectively.

## Malloc Function

The `malloc` function stands for "memory allocation" and is used to allocate a specified number of bytes in the heap. It returns a pointer to the beginning of the allocated memory block or `NULL` if the allocation fails. The general syntax is:

```c
void *malloc(size_t size);
```

## Free Function

The `free` function is used to deallocate the memory allocated by `malloc`. It takes a pointer to the memory block previously allocated by `malloc` and releases the memory, making it available for further use. The syntax is straightforward:

```c
void free(void *ptr);
```

## Usage Example

Here's a simple example demonstrating the use of `malloc` and `free`:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size = 5;

    // Allocate memory for an array of integers
    arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Use the allocated memory

    // Free the allocated memory when done
    free(arr);

    return 0;
}
```

## Best Practices

- Always check the return value of `malloc` for `NULL` to ensure successful memory allocation.
- Only `free` memory that has been dynamically allocated using `malloc`.
- Avoid using freed memory to prevent segmentation faults.
- Use `sizeof` to calculate the correct size when allocating memory for arrays.

## Additional Resources

- [C Programming - malloc and free](https://www.tutorialspoint.com/c_standard_library/c_function_malloc.htm)
- [Dynamic Memory Allocation in C](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)

Explore the provided example, experiment with dynamic memory allocation, and refer to the additional resources for a deeper understanding of this essential aspect of C programming.
