#include <stdio.h>

/**
 *main - prints all numbers divisible by 3 and 5
 *
 *Return: Always 0
 */

int main(void)
{
	int x;

	for (x = 0; x < 1024; x++)
	{
		if (((x % 3) == 0) || ((x % 5) == 0))
		{
			printf("%d, ", x);
		}
	}
	printf("\n");
	return (0);
}
