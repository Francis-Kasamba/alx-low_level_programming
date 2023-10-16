#include "main.h"

/**
 * _strlen - Compute the length of a string.
 * @S: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *S)
{
	int i;
	int count = 0;
	
	for (i = 0; S[i] != '\0'; i++)
	{
		count++;
	}

	return (count);
}

