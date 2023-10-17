#include "main.h"
#include <stdio.h>

/**
* print_times_table - prints the n times table, starting with 0.
* @n: The number to print the times table for.
*/
void print_times_table(int n)
{
	if (n < 0 || n > 15)
        return;

    for (int i = 0; i <= n; i++)
    {
	    for (int j = 0; j <= n; j++)
	    {
		    int result = i * j;
		    if (j == 0)
			    printf("%3d", result);
		    else
			    printf(",%4d", result);
	    }
	    printf("\n");
    }
}
