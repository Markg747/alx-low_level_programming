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
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2  = "";
	}

	ptr = malloc(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
	{
		s1[i] = s2[j];
		i++;
	}
	ptr[i] = s1[i];

	return (ptr);
}
