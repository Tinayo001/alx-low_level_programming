#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dlistint - Function that frees nodes in a doubly linked list
 * @head: poinetr to a pointer of a double linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
