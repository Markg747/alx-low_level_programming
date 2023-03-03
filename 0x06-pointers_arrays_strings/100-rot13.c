#include "main.h"

/**
 **rot13- encodes a string using rot13
 *
 *@n: string to be encoded
 *
 *Return: n
 */

char *rot13(char *n)
{
	int i;
	int j;
	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWZYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (n[i] == x[j])
			{
				n[i] = y[j];
				break;
			}
		}
	}
	return (n);
}
