#include "main.h"

/**
 * print_line - draws straight line
 * @n:No of times
 * Return: 0 (Success)
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
