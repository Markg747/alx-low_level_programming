#include "main.h"

/**
 *rev_string - reverses string
 *
 *@s: string variable
 *
 *Return: 0
 */

void rev_string(char *s)
{
	int i = sizeof(s) + 1;

	while (*(s + i) != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
