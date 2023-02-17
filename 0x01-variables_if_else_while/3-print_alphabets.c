#include <stdio.h>
#include <stdlib.h>

/**
 *main - start point
 *
 *Description: Prints upper and lowercase letters
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	char x = 'a';
	char y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
