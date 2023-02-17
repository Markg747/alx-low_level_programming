#include <stdio.h>
#include <stdlib.h>

/**
 *main - Start point
 *Description: Prints alphabets except e and q
 *Return: Always 0 (success)
 */

int main(void)
{
	char x = 'a';
	char e = 'e';
	char q = 'q';

	while (x <= 'z')
	{
		if (x != e && x != q)
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
