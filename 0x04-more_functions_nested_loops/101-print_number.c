#include "main.h"
#include <stdio.h>

/**
 * print_number - function that prints an integer
 * @n: integer to printed
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
