#include "main.h"

/**
 *rev_string - reverses a string
 *
 *@s: string variable
 *
 *Return: 0
 */

void rev_string(char *s)
{
	int len;
	int i;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len--)
	{
		tmp = s[i];
		s[i++] = s[len];
		s[len] = tmp;
	}
}
