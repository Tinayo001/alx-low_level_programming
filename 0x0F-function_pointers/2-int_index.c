#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array to search from
 * @size: size of array
 * @cmp: function pointers
 * Return: index of the matched character
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if(array != NULL && cmp != NULL && size > 0)
	{
		for(i = 0; i < size; i++)
		{
			if(cmp(array[i]) != 0)
			{
				return i;
			}
		
		}
	}
	return -1;
}
