#include "main.h"

/**
 *print_diagonal- prints a diagonal line
 *@n: variable
 *Return: 0
 */

void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < 1; y++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	_putchar('\n');
}

