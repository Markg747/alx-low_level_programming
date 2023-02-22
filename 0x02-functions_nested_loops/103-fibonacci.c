#include <stdio.h>

/**
 *main - start point
 *
 *Return: Always 0
 */

int main(void)
{
	long fib0 = 1;
	long fib1 = 2;
	long sum = fib1;
	int i = 0;

	while ((fib0 + fib1) < 4000000)
	{
		fib1 = fib1 + fib0;
		if ((fib1 % 2) == 0)
		{
			sum = sum + fib1;
			fib0 = fib1 - fib0;
			i++;
		}

	}
	printf("%ld", sum);
	return (0);
}
