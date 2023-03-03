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
	int i = 0;

	while (n[i] != '\0')
	{
		while ((n[i] >= 97 && n[i] <= 122) || (n[i] >= 65 && n[i] <= 90))
		{
			if ((n[i] >= 97 && n[i] <= 109) || (n[i] >= 65 && n[i] <= 77))
			{
				n[i] = n[i] + 13;
			}
			else
			{
				n[i] = n[i] - 13;
			}
		}
		i++;
	}
	return (n);
}
