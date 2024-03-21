#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Function that returns the number of elements in
 * a doubly linked list
 * @h: pointer to a doubly linked list
 * Return: The number of elements in a list.If a list is empty returns 0.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
