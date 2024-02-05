#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes function on each element of array
 * @array: the array
 * @size: size of the array
 * @action: function to perfom on each element of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL && action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
