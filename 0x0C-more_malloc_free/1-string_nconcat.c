#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings
* @n: bytes to be concatenated from s1
* @s1: string one
* @s2: string two
* Return: pointer to a new allocated space memory
*/

void string_nconcat(char *s1, char *s2, unsigned int n)
{


	if (s1 == NULL) s1 = "";

	if (s2 == NULL) s2 = "";


	unsigned int s1_len = 0;

	while (s1[s1_len] != '\0') {

		_putchar(s1[s1_len]);

		s1_len++;

	}


	unsigned int s2_len = 0;

	while (s2_len < n && s2[s2_len] != '\0') {

		_putchar(s2[s2_len]);

		s2_len++;

	}


	_putchar('\n');

}


int main(v)
{

	char *s1 = "Best, ";

	char *s2 = "School!";

	unsigned int n = 6;


	string_nconcat(s1, s2, n);


	return 0;
}

