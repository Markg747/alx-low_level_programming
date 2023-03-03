#include "main.h"

/**
 **cap_string - Capitalizes strings
 *@n: string input
 *
 *Return: n
*/

char *cap_string(char *n)
{
	int i;

	if (n[0] >= 97 && n[0] <= 122)
	{
		n[0] = n[0] - 32;
	}

	i = 0;

	while (n[i] != '\0')
	{
		switch (n[i])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':

				if (n[i + 1] >= 97 && n[i + 1] <= 122)
				{
					n[i + 1] = n[i + 1] - 32;
				}
		}
		i++;
	}
	return (n);
}
