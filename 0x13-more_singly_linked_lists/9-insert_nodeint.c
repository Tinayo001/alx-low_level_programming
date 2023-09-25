#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: first node of a listint_t
 * @idx: index of a listint_t
 * @n: number of nodes to be inserted
 * Return: the address of the new node,or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *current = *head;
	listint_t *prev = NULL;
	unsigned int count = 0;

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	while (current != NULL)
	{
		if (count == idx)
		{
			prev->next = newnode;
			newnode->next = current;
			return (newnode);
		}
		prev = current;
		current = current->next;
		count++;
	}
	free(newnode);

	return (NULL);
}
