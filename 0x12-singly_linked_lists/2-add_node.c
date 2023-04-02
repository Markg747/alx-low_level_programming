#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - adds a node to the head of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: pointer to string that adds as node
 *
 * Return: pointer to new head of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int count = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[count])
		count++;

	temp->len = count;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}

