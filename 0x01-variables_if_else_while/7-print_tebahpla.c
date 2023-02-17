#include <stdio.h>
#include <stdlib.h>

/**
 *main - Start point
 *
 *Description: reverse alphabets
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
