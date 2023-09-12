#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a variable of type
 * @d: poinetr to dog
 * @name: poinet to name
 * @age: pointer to age
 * @owner: name of owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
