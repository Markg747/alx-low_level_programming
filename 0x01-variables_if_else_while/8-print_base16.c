#include <stdio.h>
#include <stdlib.h>

/**
 *main - Start point
 *Description: print base16
 *Return: always 0 (success)
 */

int main(void)
{
	int x = '0';
	char i = 'a';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
