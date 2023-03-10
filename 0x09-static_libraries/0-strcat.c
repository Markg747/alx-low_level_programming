#include "main.h"

/**
 **_strcat - concatenates two strings
 *
 *@dest: destination of string
 *@src: source of string
 *
 *Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (tmp);
}
