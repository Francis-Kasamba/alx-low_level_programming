#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to check.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at index `index`, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    /* Check if the index is out of the range of an unsigned long int */
    if (index >= sizeof(unsigned long int) * 8)
    {
        return (-1);
    }

    /* Right shift `n` by `index` positions and get the least significant bit */
    return ((n >> index) & 1);
}

