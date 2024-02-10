#include <stdio.h>
#include "main.h"

/**
 * _helper - function that helps get the square root of a number recursively
 * @n: the number for which the square root is to found
 * @geuss: The current guess for the square root.
 * return: the square root of the number if found else -1
 */

int _sqrt_helper(int n, int geuss)
{
	if (geuss * geuss == n)
	{
		return (geuss);
	}
	else if (geuss * geuss > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, geuss + 1));
	}
}

/**
 * _sqrt_recursion - function to find square root of a number recursively
 * @n: the number to find its square root
 * return: the natural square root if found and -1 if not found
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}
