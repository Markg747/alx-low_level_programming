#include <stdio.h>
#include <stdlib.h>

/**
 *main - Start point
 *
 *Description: Prints 0 to 9
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	while (i <= '9')
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
