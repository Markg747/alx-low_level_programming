#include "main.h"
#include <stdio.h>

/**
 **_strncpy- copies string
 *
 *@src: source of string
 *@dest: destination of string
 *@n: number of bytes of string to be copied
 *
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}

