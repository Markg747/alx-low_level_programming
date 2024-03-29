#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_strings - prints strings
 *
 *@separator: string separator
 *@n: number of strings
 *
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *x;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(strings, char *);
		if (x == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", x);
		}
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(strings);
	printf("\n");
}
