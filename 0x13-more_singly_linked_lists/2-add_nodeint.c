#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 **add_nodeint - adds a new node at the beginning of a listint_t list.
 *
 *@head: pointer to the first node
 *@n: value of new node
 *
 *Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (*head == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(sizeof(listint_t));
		ptr->n = n;
		ptr->next = *head;
		*head = ptr;
	}
	return (ptr);
}
