#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer of string
 * @to: char
 */

void set_string(char **s, char *to)
{
	*s = malloc(strlen(to) + 1);
	

	if (*s != NULL)
	{
		strcpy (*s, to);
	}
}
