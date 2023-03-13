#include "main.h"
#include <stdlib.h>

/**
 **str_concat - concatenates two strings.
 *
 *@s1: string input
 *@s2: string input
 *
 *Return: newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int len1 = 0;
	int len2 = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2  = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		len2++;
	}
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	return (ptr);
}
