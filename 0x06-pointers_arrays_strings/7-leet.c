#include "main.h"

/**
 **leet - encodes leetspeak
 *
 *@n: string to be encoded
 *
 *Return: n
 */

char *leet(char *n)
{
	int i;
	int j;
	char x[20] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};

	int y[10] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == x[j])
			{
				n[i] = y[j];
			}
		}
	}
	return (n);
}
