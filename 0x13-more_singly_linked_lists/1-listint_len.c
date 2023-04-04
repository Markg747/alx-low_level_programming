#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *listint_len -  returns the number of elements in a linked listint_t list.
 *
 *@h: pointer to the first node
 *
 *Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
