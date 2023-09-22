#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	char c;
	int i = 0;
	float f;
	char *s;

	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			char c = va_arg(args, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			i = va_arg(args, int);
			printf("%d", num);
		}
		else if (format[i] == 'f')
		{
			f = va_arg(args, double);
			printf("%f", num);
		}
		else if (format[i] == 's')
		{
			char *str = va_arg(args, char *);

			print_string(str);
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
