#include <stdio.h>

/**
 *main - prints fibonacci series upto 50
 *
 *Return: Always 0
 */

int main(void)
{
	long fib0 = 1;
	long fib1 = 2;
	int i = 0;

	while (i < 50)
	{
		if (i == 0)
		{
			printf(" ,%ld", fib0);
		}
		else if (i == 1)
		{
			printf(" ,%ld", fib1);
		}
		else
		{
			fib1 = fib1 + fib0;
			fib0 = fib1 - fib0;
			printf(" ,%ld", fib1);
		}
		++i;
	}
	printf("\n");
	return (0);
}



