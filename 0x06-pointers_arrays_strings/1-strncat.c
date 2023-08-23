#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: source of string
 * @dest: destination of string
 * @n: number of bytes to be concatenated
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != 0; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
