#include "main.h"

/**
 *swap_int - swaps values
 *
 *@a: first value
 *@b: second value
 *Return: 0
 */

void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
