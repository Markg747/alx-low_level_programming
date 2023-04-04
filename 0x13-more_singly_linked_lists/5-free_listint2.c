#include "lists.h"
#include <stdlib.h>

/**
 *free_listint2 - frees a listint_t list.
 *
 *@head: pointer to the address of first node
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	head == NULL;
}
