#include "main.h"

/**
 *print_number - prints integer
 *@n: variable
 *Return: 0
 */

void print_number(int n)
{
	int copy;
	int nth;
	int size = 1;
	int ones = n % 10;

	n /= 10;
	copy = n;
	if (ones < 0)
	{
		ones *= -1, copy *= -1, n *= -1;
		_putchar('-');
	}
	if (copy > 0)
	{
		while (copy / 10 != 0)
		{
			copy /= 10, size *= 10;
		}
		while (size > 0)
		{
			nth = n / size;
			_putchar(48 + nth);
			n -= nth * size;
			size /= 10;
		}
	}
	_putchar(48 + ones);
}
