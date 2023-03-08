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

/**
 *is_prime_number - checks if number is prime number
 *
 *@n: number to check
 *
 *Return: 1 if prime number, 0 if not prime
 */

int is_prime_number(int n)
{
	int divider = 2;

	if (n % divider == 0 || n < 2)
	{
		return (0);
	}
	else if (n == divider)
	{
		return (1);
	}
	else
	{
		return (prime(n, divider + 1));
	}
}
