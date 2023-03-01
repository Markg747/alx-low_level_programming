#include "main.h"

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
	int tmp;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
