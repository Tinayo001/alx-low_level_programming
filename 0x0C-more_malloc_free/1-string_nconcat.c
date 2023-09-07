#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - cancatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes to concatenate from s2
 * Return: cancatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *arr;
	unsigned int s1len = 0;
	unsigned int s2len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;
	arr = malloc(sizeof(char) * (s1len + n) + 1);
	if (arr == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (i = 0; s1[i] != '\0'; i++)
			arr[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			arr[s1len + 1] = s2[i];
		arr[s1len + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			arr[i] = s1[i];
		for (i = 0; i < n; i++)
			arr[s1len + 1] = s2[i];
		arr[s1len + i] = '\0';
	}
	return (arr);
}
