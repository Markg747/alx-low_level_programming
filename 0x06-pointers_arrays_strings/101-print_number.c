#include "main.h"

/**
 *print_number - prints integer
 *
 *@n: integer variable
 *
 *Return: void
 */

void print_number(int n)
{
	int copy;
	int nth;
	int size = 1;
	int ones = n % 10;

	n = n / 10;
	copy = n;
	if (ones < 0)
	{
		ones = ones * -1, copy = copy * -1, n = n * -1;
		_putchar('-');
	}
	if (copy > 0)
	{
		while (copy / 10 != 0)
		{
			copy = copy / 10, size = size * 10;
		}
		while (size > 0)
		{
			nth = n / size;
			_putchar(48 + nth);
			n = n - nth * size;
			size = size / 10;
		}
	}
	_putchar(48 + ones);
}
