#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 **_calloc -  allocates memory for an array, using malloc
 *
 *@nmemb: number of elements
 *@size: size of element
 *
 *Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
