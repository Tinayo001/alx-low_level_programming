#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: starting node in a listint_t
 * @index: is the index of the node that should be deleted.Index starts at 0
 * Return: 1 if it succeeded,-1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *prev = NULL;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		listint_t *temp = *head;

		free(temp);

		return (1);
	}
	while (current != NULL)
	{
		if (count == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
		count++;
	}
	return (-1);
}
