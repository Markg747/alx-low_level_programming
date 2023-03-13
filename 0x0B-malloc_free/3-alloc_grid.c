#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 ***alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 *@width: width of array
 *@height: height of array
 *
 *Return: pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;

	if (width < 0 || height < 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int *) * height); /*Allocatea memory for rows*/
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width); /* Allocates memory for columns*/
		if (ptr[i] == NULL)
		{
			while (--i >= 0)
			{
				free(ptr[i]);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
