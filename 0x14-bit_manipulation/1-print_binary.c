#include "main.h"

/**
 * print_binary - function prints the binary representation of a number
 * @n: the numbers in the string
 */

void print_binary(unsigned long int n)
{
	int shift;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (shift = sizeof(unsigned long int) * 8 - 1; shift >= 0; shift--)
	{
		unsigned long int mask = 1UL << shift;

		if ((n & mask) == mask)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
	}
}
