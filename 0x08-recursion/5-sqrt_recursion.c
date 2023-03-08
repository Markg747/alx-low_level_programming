#include "main.h"

/**
 *square - gets squareroot of number
 *@x: squareoot
 *@y: square number
 *
 *Return: the squareroot
 */

int square(int x, int y)
{
	if (y == 1)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else if (x * x == y)
	{
		return (x);
	}
	else
	{
		return (square(x + 1, y));
	}
}

/**
 *_sqrt_recursion - returns the natural square root of a number
 *
 *@n: the square number
 *
 *Return: the squareroot
 */

int _sqrt_recursion(int n)
{
	return (square(1, n));
}
