#include "main.h"
#include <stdlib.h>


/**
 **create_array - creates an array of chars
 *
 *@size: size allocated
 *@c: character array to be created
 *
 *Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	ptr = (char *) malloc(size * sizeof(c));

	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		scanf("%s", ptr + i);
	}
	return (0);
}
