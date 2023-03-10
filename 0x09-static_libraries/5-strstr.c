#include "main.h"

/**
 **_strstr - locates substring
 *
 *@haystack: string to be scanned
 *@needle: string to compare to
 *
 *Return: Returns a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (&haystack[i]);
			}
		}
	}
	return ('\0');
}
