#include "main.h"

/**
 *print_rev - reverses string
 *
 *@s: string variable
 *
 *Return: 0
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		continue;
	}
	for (i < sizeof(s); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
