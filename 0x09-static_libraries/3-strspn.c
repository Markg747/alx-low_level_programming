#include "main.h"

/**
 *_strspn - gets the length of a prefix substring
 *
 *@s: initial string
 *@accept: substring
 *
 *Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++)
			;
		if (s[i] == accept[j])
		{
			len++;
		}
		if (accept[j] == '\0')
		{
			return (len);
		}
	}
	return (len);
}

