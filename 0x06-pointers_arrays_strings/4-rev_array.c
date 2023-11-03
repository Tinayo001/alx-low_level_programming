#include "main.h"

/**
 * reverse_array - reverses the conetnt of an array in a string
 * @n: pointer to array of integers
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
