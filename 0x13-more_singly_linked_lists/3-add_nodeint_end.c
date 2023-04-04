#include "lists.h"
#include <stdlib.h>

/**
 **add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 *@head: pointer to the first node
 *@n: value to the first node
 *
 *Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp = *head;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = ptr;
	return (ptr);
}
