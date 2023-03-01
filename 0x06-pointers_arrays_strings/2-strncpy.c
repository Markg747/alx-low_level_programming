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
	int i = 0;
	char *tmp = dest;

	while (dest[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (tmp);
}
