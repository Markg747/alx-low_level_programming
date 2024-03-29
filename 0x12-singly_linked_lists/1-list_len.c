#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *list_len -  returns the number of elements in a linked list_t list.
 *
 *@h: pointer to the first node
 *
 *Return: number of elements
 */

size_t list_len(const list_t *h)
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
