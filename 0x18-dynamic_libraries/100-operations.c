#include <stdio.h>

/**
 * add - Adds two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result of addition
 */

int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - Subtracts two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result of subtraction
 */

int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result of multiplication
 */

int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - Divides two integers
 * @a: First integer (dividend)
 * @b: Second integer (divisor)
 */

int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}
/**
 * mod - Finds the remainder of division
 * @a: First integer (dividend)
 * @b: Second integer(divisor)
 *
 * Return: Remainder of dision
 */

int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a % b);
}
