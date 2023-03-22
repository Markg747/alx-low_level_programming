#include "function_pointers.h"
#include <stdio.h>

/**
 *int_index -  searches for an integer
 *
 *@array: array to be searched
 *@size: size of array
 *@cmp: function pointer
 *
*Return: index of the first element
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
