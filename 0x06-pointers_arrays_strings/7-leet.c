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
	char x[11] = "aAeEoOtTlL";

	char y[11] = "4433007711";

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
