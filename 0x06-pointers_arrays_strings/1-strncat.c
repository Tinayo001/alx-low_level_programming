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
	int destlen = 0;
	int i;

	while (dest[destlen + 1] != '\0')
	{
		destlen++;
	}
	
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[destlen + i] = src[i];
	}
	
	dest[destlen + i] = '\0';

	return (dest);
}
