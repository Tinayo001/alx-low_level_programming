#include "main.h"

/**
 * print_numbers - orints numbers from 0 to 9
 * Return: 0 (Success)
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
