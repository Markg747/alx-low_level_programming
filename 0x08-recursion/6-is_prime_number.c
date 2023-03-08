#include "main.h"

/**
 *prime - checks if number is a prime number
 *
 *@a: number to check
 *@divider: tester
 *
 *Return: prime number
 */

int prime(int a, int divider)
{
	if (a == divider)
	{
		return (1);
	}
	else if ((a % divider) == 0)
	{
		return (0);
	}
	else
	{
		return (a, divider + 1);
	}
}
