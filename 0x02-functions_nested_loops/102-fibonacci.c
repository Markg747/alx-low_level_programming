#include <stdio.h>

/**
 *main - prints fibonacci series upto 50
 *
 *Return: Always 0
 */

int main(void)
{
	int fib0 = 1;
	int fib1 = 2;
	int fib2;
	int i;

	printf("%d, %d, ", fib0, fib1);

	for (i = 2; i < 50; i++)
	{
		fib2 = fib0 + fib1;

		fib0 = fib1;
		fib1 = fib2;

		if (i == 49)
		{
			continue;
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
