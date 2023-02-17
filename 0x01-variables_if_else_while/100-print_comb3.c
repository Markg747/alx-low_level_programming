#include <stdio.h>
#include <stdlib.h>
/**
 *main - start point
 *
 *Description: prints combination of two numbers
 *
 *Return: always 0 (success)
 */

int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			putchar(x + '0');
			putchar(y + '0');
		}
		if (x == 8 && y == 9)
		{
			continue;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
