#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - start point
 *
 *Description: find if random number is negative or positive
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(NULL));
	n = rand() - RAND_MAX;

	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}
