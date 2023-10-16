#include "main.h"

/**
* _atoi - convert a string to an integer
* @s: the pointer to convert
* Return: An integer
*/

int _atoi(char *s)
{
int c = 0;
unsigned int ni = 0;
int min = 1;  /* Initialize the sign to positive */
int isi = 0;

while (s[c])
{
if (s[c] == '-')
{
min *= -1;  /* Change the sign to negative if a '-' is encountered */
}
while (s[c] >= '0' && s[c] <= '9')
{
isi = 1;
ni = (ni * 10) + (s[c] - '0');
c++;
}
if (isi == 1)
{
break;
}
c++;
}
ni *= min;  /* Apply the sign to the final result */

return (ni);  /* Return the converted integer */
}

