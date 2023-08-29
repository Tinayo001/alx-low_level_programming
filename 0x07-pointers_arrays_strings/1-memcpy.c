#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: function copies
 * @src: bytes from memorry area
 * @dest: to memory area
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
