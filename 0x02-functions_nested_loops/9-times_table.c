#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the times table for 0 to 9
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if (j == 0)
			{
				printf("%d", result);
			}
			else if (result < 10)
			{
				printf("  %d", result);
			}
			else
			{
				printf(" %d", result);
			}

			if (j < 9)
			{
				printf(",");
			}
		}
		printf("\n");
	}
}

