#include "main.h"

/**
 **_strncat - concatenates strings
 *
 *@src: source of string
 *@dest: destination of string
 *@n: number of bytes to be used by the source string
 *
 *Return: pointer to the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *tmp = dest;
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (tmp);
}
