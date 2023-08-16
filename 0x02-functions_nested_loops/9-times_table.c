#include "mainh.h"

/**
* times_table - function that prints the nine time table,starting with zero
* Result: 0
*/
void times_table(void)
{
	int i; j; result;
	
	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			result = i * j;
			_putchar("%d", result);
		}
	}
	_putchar('\n');
}
