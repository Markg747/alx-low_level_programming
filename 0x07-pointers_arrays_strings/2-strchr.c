#include "main.h"
#include <stddef.h>

/**
 **_strchr - locates character in string
 *
 *@s: the string
 *@c: the character
 *
 *Return: pointer to first occurence of char c
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return ('\0');
	}
	return (0);
}
