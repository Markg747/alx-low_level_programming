#include "main.h"

/**
 *puts2 - prints out every other character in a string
 *
 *@str: string variable
 *
 *Return: 0
 */

void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (; i <= len; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
