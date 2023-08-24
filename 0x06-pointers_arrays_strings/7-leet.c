#include "main.h"

/**
 * leet - encode string using leet encoding
 * @s: string to be encoded
 * Return: string encoded
 */

char *leet(char *s)
{
	int i;
	int j;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0 ; j < 10; j++)
		{
			if (s[i] == a[j])
				s[i] = b[j];
		}
	}
	return (s);
}

