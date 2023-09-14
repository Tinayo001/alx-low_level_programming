#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - returns sum of all parameters
 * @n: number of parameters
 * Return: if n== 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		sum += num;
	}
	va_end(args);

	return (sum);
}
