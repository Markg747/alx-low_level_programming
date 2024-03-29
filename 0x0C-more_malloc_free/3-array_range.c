#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 **array_range -  creates an array of integers
 *
 *@min: first element
 *@max: last element
 *
 *Return: pointer to new array;
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
