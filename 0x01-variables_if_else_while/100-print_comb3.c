#include <stdio.h>
#include <stdlib.h>

/**
 *main - start point
 *Description: Combination of two digits
 *Return: always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 90; x++)
	{
		putchar((x / 10) + '0');
		putchar((x % 10) + '0');
		x++;
		if (x != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
