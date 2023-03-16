#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 **malloc_checked - allocates memory using malloc
 *
 *@b: number of int
 *
 *Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(int) * b);
	if (ptr == NULL)
	{
		return (98);
	}
}
