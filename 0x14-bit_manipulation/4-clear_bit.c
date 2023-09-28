#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: pointer to a given number of bytes in a string.
 * @index: is the index,starting from 0 of the bit you want to set
 * Return: 1 if it worked,or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = ~mask;

	*n = *n & mask;
	return (1);
}
