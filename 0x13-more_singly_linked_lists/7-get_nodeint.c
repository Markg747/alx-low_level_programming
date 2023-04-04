#include "lists.h"
#include <stdlib.h>

/**
 **get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 *
 *@head: pointer to the first node
 *@index: the node to return
 *
 *Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
