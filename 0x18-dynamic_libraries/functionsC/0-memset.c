#include "main.h"

/**
 * _memset - copies memory of n bytes to a pointer
 * @s: character pointer to the destination memory
 * @b: constant character value to be copied
 * @n: number of characters to be copied
 * Return: pointer to a destination memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	if (n == 0)
	{
		return (s);
	}
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
