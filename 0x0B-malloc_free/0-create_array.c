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
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	ptr[i] = '\0';

	return (ptr);
}
