#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 **string_nconcat - concatenates two strings
 *
 *@s1: first string
 *@s2: second string
 *@n: if it is >= to the length of s2 then use the entire string s2
 *Return: pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i;
	int j;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		len2++;
	}
	len2++;
	ptr = malloc(sizeof(char) * (len1 + len2));
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (n >= len2)
	{
		for (i = 0; i < len1; i++)
		{
			ptr[i] = s1[i];
		}
		for (j = 0; j < len2; j++)
		{
			ptr[i] = s2[j];
		}
	}
	return (ptr);
}
