include "main.h"

/**
 *main - check the code
 *
 *Return: Always 0
 */

void times_table(void)
{
	int r;
	int c;
	int p;
	int t;
	int o;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10; c++)
		{
			p = r * c;
			t = p / 10;
			o = p % 10;

			if (c == 0)
			{
				_putchar(48);
			}
			else if (p < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(t + 48);
				_putchar(o + 48);

				

