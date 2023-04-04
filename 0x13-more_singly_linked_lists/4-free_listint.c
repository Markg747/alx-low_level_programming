#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_listint - frees a listint_t list.
 *
 *@head: pointer to the first node
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
