alx-low_level_programming
This repository is part of the ALX Software Engineering curriculum and focuses on low-level programming in C. The "0x06-pointers_arrays_strings" directory contains C source code files that deal with pointers, arrays, and strings.

File: 0-strcat.c
Description
0-strcat.c is a C program that contains a custom implementation of the strcat function. The strcat function in C is used to concatenate two strings. This file provides a basic understanding of how this function can be implemented.

Usage
To compile the program, you can use a command like:

bash
Copy code
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-strcat.c -o strcat
To run the compiled program:

bash
Copy code
./strcat
Example
Here's an example of how to use the custom strcat function:

c
Copy code
#include <stdio.h>

char *custom_strcat(char *dest, const char *src);

int main(void) {
    char dest[100] = "Hello, ";
    char src[] = "world!";
    custom_strcat(dest, src);
    printf("%s\n", dest);
    return (0);
}
The output will be: Hello, world!

Author
This code is written by [Francis Kasamba].
