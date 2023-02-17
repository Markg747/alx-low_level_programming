#include <stdio.h>
#include <stdlib.h>

/**
 *main - Start point
 *Description: Prints alphabets except e and q
 *Return: Always 0 (success)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
