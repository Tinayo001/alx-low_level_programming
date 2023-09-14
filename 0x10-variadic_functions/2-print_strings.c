#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints string followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of string passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
