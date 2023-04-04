#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *pop_listint - deletes the head node of a listint_t linked list, and
 *returns the head node’s data (n).
 *
 *@head: pointer to the address of the first node
 *
 *Return: if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int h;

	if (*head == NULL)
	{
		return (0);
	}
	if ((*head)->next == NULL)
	{
		free(*head);
	}
	ptr = *head;
	h = (*head)->n;
	(*head) = (*head)->next;
	free(ptr);
	ptr = NULL;
	return (h);
}
