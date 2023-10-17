#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number to print the times table for.
 *
 * Description: This function prints the n times table, starting from 0
 * up to n, with proper formatting and spacing.
 */
void print_times_table(int n)
{
    int num, mult, prod;

    if (n >= 0 && n <= 15)
    {
        for (num = 0; num <= n; num++)
        {
            _putchar('0');
            for (mult = 1; mult <= n; mult++)
            {
                prod = num * mult;

                if (mult == 0)
                    prod = 0;

                if (mult == 0)
                {
                    _putchar(',');
                    _putchar(' ');
                    _putchar('0' + prod);
                }
                else
                {
                    _putchar(',');
                    _putchar(' ');

                    if (prod <= 99)
                        _putchar(' ');

                    if (prod <= 9)
                        _putchar(' ');

                    if (prod > 99)
                        _putchar('0' + prod / 100);

                    if (prod > 9)
                        _putchar('0' + (prod / 10) % 10);

                    _putchar('0' + prod % 10);
                }
            }
            _putchar('\n');
        }
    }
}

