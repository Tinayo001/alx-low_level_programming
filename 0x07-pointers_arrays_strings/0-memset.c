#include "main.h"
/**
 * _memset - copies memory of n bytes to a pointer
 * @char *s: character pointer
 * @char: constant character b
 * result: number of bytes s
 */

char *_memset(char *s, char b, unsigned int n)
{
	if (n == 0)
	{
		return s;
	}
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}
