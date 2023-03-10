#include "main.h"

/**
 *_islower - Start point
 *@c: if the chracter is in lowercase
 *Return: Always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
