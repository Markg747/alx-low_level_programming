#include "main.h"

/**
 *print_last_digit- Start point
 *
 *@x: stores integer
 *
 *Return: last digit of x
 */

int print_last_digit(int x)
{
	int i = x % 10;

	if (x > 0)
	{
		_putchar(i + '0');
		return (i);
	}
	else if (x < 0)
	{
		_putchar(-i + '0');
		return (-i);
	}
}
