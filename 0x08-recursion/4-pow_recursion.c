#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to power of y
 * @x:the value to multiply
 * @y: the number of times to multiply
 * Return: the value multiplied by y times
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (x == 0)
		return (0);
	return (x  * _pow_recursion(x, y - 1));
}
