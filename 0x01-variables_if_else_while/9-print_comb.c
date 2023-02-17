#include <stdio.h>
#include <stdlib.h>
/**
 *main - Start point
 *
 *Description: Combination
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
