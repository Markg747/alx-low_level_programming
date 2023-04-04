#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_listint -  prints all the elements of a listint_t list.
 *
 *@h: pointer to the first node
 *
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		count++;
		printf("%d", h->n);
		h = h->next;
	}
	return (count);
}
