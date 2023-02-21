#include "main.h"

/**
 *main - Start point
 *
 *Description: uses _putchar() to print out string
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char n[8] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(n[i]);
	}
	_putchar('\n');
	return (0);
}
