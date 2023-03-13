#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *
 *@str: string input
 *
 *Return: pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	int i;
	char *ptr;
	int len = 0;

	if (str == NULL)
	{
		return (0);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	len++;

	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] < len; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
