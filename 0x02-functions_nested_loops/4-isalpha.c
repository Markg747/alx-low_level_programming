#include "main.h"

/**
 *_isalpha - Start point
 *
 *@c: check is it is an alphabetic character
 *
 *Return: Always 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c >= 122) || (c <= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
