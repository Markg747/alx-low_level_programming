#include "main.h"

/**
 * string_len - checks for string length
 *
 *@c: string to be checked
 *
 *Return: string length
 */

int string_len(char *c)
{
	if (*c == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + string_len(c + 1));
	}
	return (0);
}

/**
 *pali_checker - checks if string is a palindrome
 *
 *@c: string to be checked
 *@i: first index position
 *@j: last index position
 *
 *Return: 1 if is palindrome else 0
 */

int pali_checker(char *c, int i, int j)
{
	if (*(c + i) == *(c + j))
	{
		if (i == j || i == j + 1)
		{
			return (1);
		}
		else
		{
			return (pali_checker(c, i + 1, j - 1));
		}
	}
	return (0);
}

/**
 *is_palindrome - checks if string is palindrome
 *
 *@s: string to be checked
 *
 *Return: 1 if palindrome else 0
 */

int is_palindrome(char *s)
{
	int len = string_len(s);

	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (pali_checker(s, s[0] + 1, len - 1));
	}
}
