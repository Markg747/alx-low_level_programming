#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - returs sum of all its parameters
 *
 *@n: number of parameters
 *
 *Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	va_list numbers;

	va_start(numbers, n);
	for (int i = 0; i < n; i++)
	{
		sum = sum + va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}
