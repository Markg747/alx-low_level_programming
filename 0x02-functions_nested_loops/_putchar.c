#include <unistd.h>

/**
 *_putchar - writes character n to stdout
 *
 *@n: The caharacter to print
 *
 *Return: On success 1
 *
 *On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char n)
{
	return (write(1, &n, strlen(n)));
}
