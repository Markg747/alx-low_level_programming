#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 **_realloc - reallocates a memory block using malloc and free
 *
 *@ptr: pointer to the memory previously allocated
 *@old_size: size, in bytes, of the allocated space for ptr
 *@new_size: new size, in bytes of the new memory block
 *
 *Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char nptr;
	int i;

	if (new_size == 0 && ptr != NULL)
	{
		free (ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}
	nptr = malloc(sizeof(char) * new_size);
	if (nptr == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			nptr[i] = ((char *)ptr)[i];
		}
		free(ptr);
		return (nptr);
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			nptr[i] = ((char *)ptr)[i];
		}
		free(ptr);
	}
	return (nptr);
}
