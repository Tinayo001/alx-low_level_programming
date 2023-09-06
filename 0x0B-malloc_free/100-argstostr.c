#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: int input
 * @av: double pointer array
 * Return: a pointer to a new string,or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i;
	int totalLength = 0;
	int currentPosition = 0;
	char *result;
	char *concatenatedArgs;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		totalLength += strlen(av[i]) + 1;
	}
	result = (char *)malloc(totalLength + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		strcpy(result + currentPosition, av[i]);
		currentPosition += strlen(av[i]);
		result[currentPosition] = '\n';
		currentPosition++;
	}
	result[currentPosition] = '\0';
	return (result);

	concatenatedArgs = argstostr(ac, av);
	if (concatenatedArgs != NULL)
	{
		for (i = 0; concatenatedArgs[i] != '\0'; i++)
			_putchar(concatenatedArgs[i]);
	}
	_putchar('\n');
	free(concatenatedArgs);
}
