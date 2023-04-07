#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index.
 *
 * @n: the bit.
 * @index: index to get the value at
 *
 * Return: the value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
