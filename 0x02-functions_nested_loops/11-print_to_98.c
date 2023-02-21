#include "main.h"
#include <stdio.h>

/**
 *print_to_98- prints all natural numbers upto 98
 *
 *@n: natural numbers variable
 *
 *Return: Always 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = 0; n <= 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (n = 0; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	_putchar('\n');
}
