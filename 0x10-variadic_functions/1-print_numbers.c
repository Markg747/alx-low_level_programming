#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_numbers - prints numbers
 *
 *@separator: number separator
 *@n: number of ints
 *
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int x;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(numbers, unsigned int);
		printf("%d", x);
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(numbers);
	printf("\n");
}