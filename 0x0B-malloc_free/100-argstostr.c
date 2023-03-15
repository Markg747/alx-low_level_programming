#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 **argstostr - concatenates all the arguments of your program
 *
 *@ac: Argument count
 *@av: argument vector
 *
 *Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int len = 0;
	int k = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;/*allocate space for null terminator*/
	}
	len++; /*allocate space for new line*/
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k++] = av[i][j];
		}
		ptr[k++] = '\n';
	}
	return (ptr);
}
