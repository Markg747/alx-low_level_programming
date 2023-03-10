#include "main.h"

/**
 *_strcmp - compares strings
 *
 *@s1: string input
 *@s2: string input
 *
 *Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

