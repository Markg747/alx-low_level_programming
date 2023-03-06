#include "main.h"

/**
 **_memset - fills memory with constant byte
 *
 *@s: memory address
 *@b: constant byte
 *@n:number of bytes to be filled
 *
 *Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
