#include "main.h"

/**
 *flip_bits -  returns the number of bits you would need to flip to get from
 *		one number to another.
 *@n: first number
 *@m: second number
 *
 *Return: number of bits you would need to flip to get from a number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned long int bits = 0;

	while (xor > 0)
	{
		bits = bits + (xor & 1);
		xor = xor >> 1;
	}

	return (bits);
}
