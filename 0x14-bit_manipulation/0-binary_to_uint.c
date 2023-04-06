#include "main.h"

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *
 *@b: pointer to the binary characters
 *
 *Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, res = 0;
	int len = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		len++;
	}
	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
		{
			return (0);
		}
		if (b[len - 1] == '1')
		{
			res = res + base;
		}
		base = base * 2;
		len--;
	}
	return (res);
}
