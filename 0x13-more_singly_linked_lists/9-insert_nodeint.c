#include "lists.h"
#include <stdlib.h>

/**
 **insert_nodeint_at_index - inserts a new node at a given position.
 *
 *@idx: the position index
 *@n: value of node
 *
 *Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;
	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}
	idx--;
	while (idx != 1)
	{
		*head = (*head)->next;
		idx--;
	}
	ptr->next = (*head)->next;
	(*head)->next = ptr;
	return (*head);
}
