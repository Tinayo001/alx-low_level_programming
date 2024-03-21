#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_dlistint - Function that returns the sum of data in a dlistint_t.
 * @head: pointer to a dlistint_t list
 * Return: sum of all the data,if the list is empty, return 0.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
