#include <stdio.h>
#include <stdlib.h>
/**
 *main - Start point
 *
 *Description: Threepeat
 *
 *Return: always 0 (success)
 */

int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 10; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			for (z = y + 1; z < 10; z++)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (x < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
