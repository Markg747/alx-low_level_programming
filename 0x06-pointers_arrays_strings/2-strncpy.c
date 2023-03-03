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
	char *tmp = dest;

	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (dest[j] != '\0' && j < n)
	{
		dest[j] = src[i];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (tmp);
}
