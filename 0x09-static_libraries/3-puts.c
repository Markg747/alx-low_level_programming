#include "main.h"

/**
 *_puts - Prints out string
 *
 *@str: string variable
 *
 *Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i)  != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
