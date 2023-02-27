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
	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
