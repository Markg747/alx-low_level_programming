#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *print_list -  prints all the elements of a list_t list.
 *
 *@h: first node of list
 *
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[%u] %s\n", ptr->len, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", ptr->len, ptr->str);
		}
		count++;
		ptr = ptr->next;
	}
	return (count);
}
