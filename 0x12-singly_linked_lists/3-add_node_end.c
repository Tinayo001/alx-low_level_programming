#include "lists.h"

/**
 * add_node_end - adds a new node at  the end of a list_t list.
 * @head: head of the mode
 * @str: string
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;
	unsigned int i, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnode->len = count;
	newnode->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = newnode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	return (*head);
}

