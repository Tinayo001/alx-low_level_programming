#include "main.h"
#include <stdlib.h>
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
	int totalLength = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < ac; i++)
	{
		totalLength += strlen(av[i]) + 1;
	}
	char *result = (char *)malloc(totalLength + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	int i;
	int currentPosition = 0;

	for (i = 0; i < ac; i++)
	{
		strcpy(result + currentPosition, av[i]);
		currentPosition += strlen(av[i]);
		result[currentPosition] = '\n';
		currentPosition++;
	}
	result[currentPosition] = '\0';

	return (result);

	char *concatenatedArgs = argstostr(ac, av);

	if (concatenatedArgs != NULL)
	{
		printf("Concatenated Args:\n%s\n", concatenatedArgs);
		free(concatenatedArgs);
	}
}
