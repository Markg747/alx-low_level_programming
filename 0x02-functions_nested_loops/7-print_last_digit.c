#include "main.h"

/**
 *print_last_digit- Start point
 *
 *@x: stores integer
 *
 *Return: Always 0
 */

int print_last_digit(int x)
{
	if ((x % 10) > 0)
	{
		_putchar((x % 10) + '0');
	}
	else if ((x % 10) < 0)
	{
		_putchar(-(x % 10) + '0');
	}
	return (0);
}
