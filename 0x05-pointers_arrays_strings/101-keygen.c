#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the "101-crackme" program.
 * Return: Always 0.
 */
int main(void)
{
    char password[85];
    int index, sum, diff_half1, diff_half2;

    srand(time(0));

    for (index = 0; index < 85; index++)
        password[index] = 33 + rand() % 94;

    sum = 0;
    for (index = 0; index < 85; index++)
        sum += password[index];

    diff_half1 = (sum - 2772) / 2;
    diff_half2 = (sum - 2772) / 2;

    if ((sum - 2772) % 2 != 0)
    {
        diff_half1++;
    }

    for (index = 0; index < 85; index++)
    {
        if (password[index] >= (33 + diff_half1))
        {
            password[index] -= diff_half1;
            break;
        }
    }

    for (index = 0; index < 85; index++)
    {
        if (password[index] >= (33 + diff_half2))
        {
            password[index] -= diff_half2;
            break;
        }
    }

    password[84] = '\0';

    printf("%s\n", password);

    return 0;
}

