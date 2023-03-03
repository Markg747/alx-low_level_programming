#include "main.h"
#include <stdio.h>

/**
 *reverse_array - reverses the elements in an array
 *
 *@a: array name
 *@n: number of elemets in array
 *
 *Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n; i >= 0; i++)
	{
		printf("%d", a[i]);
	}
}
