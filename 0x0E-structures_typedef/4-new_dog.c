#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - function that creats new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}

	newDog->name = strdup(name);
	newDog->owner = strdup(owner);

	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);

		return (NULL);
	}
	newDog->age = age;
	return (newDog);
}
