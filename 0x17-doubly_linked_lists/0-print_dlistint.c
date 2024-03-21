#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all the elements of a doubly
 * linked list of integers and returns the number of nodes
 * @h: Pointer to the head of the doubly linked list.
 * Return: The number of nodes in the list.If the list is empty, returns 0.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
