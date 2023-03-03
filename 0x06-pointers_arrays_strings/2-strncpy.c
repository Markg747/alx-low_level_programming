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

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
