#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - Returns the nth node of dlistint_t linked list.
 * @head: Pointer to the head of a doubly linked list.
 * @index: Index of the node, starting from 0.
 * Return: Pointer to the nth node.If the node does not exists return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	return ((i == index) ? head : NULL);
}
