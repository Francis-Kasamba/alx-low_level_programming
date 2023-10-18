#include "main.h"

/**
 * cap_string - Capitalizes all words in a string
 * @str: The input string
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
	int i;
	int cap_next = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
		{
			cap_next = 1;
		}
		else if (cap_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			cap_next = 0;
		}
		else
		{
			cap_next = 0;
		}
	}

	return (str);
}


