#include <stdio.h>
#include <stdlib.h>
/**
 *main - Start point
 *
 *Description: Prints alphabets
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
