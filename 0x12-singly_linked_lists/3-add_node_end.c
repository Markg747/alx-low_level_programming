#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 **add_node_end - adds a new node at the end of a list_t list.
 *
 *@head: Pointer to head of the linked list
 *@str: string to add to nodes
 *
 *Return:  the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int length = 0;
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	while (str[length])
	{
		length++;
	}
	new_node->len = length;
	new_node->str = strdup(str);

	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
