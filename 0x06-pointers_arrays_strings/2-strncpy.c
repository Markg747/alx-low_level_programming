#include "main.h"

/**
 *_strncpy- copies string
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

	for (i = 0; i < n && dest[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
