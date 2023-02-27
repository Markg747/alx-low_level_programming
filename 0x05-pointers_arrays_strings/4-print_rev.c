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
	int i = sizeof(s) + 1;

	while (*(s + i) != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
