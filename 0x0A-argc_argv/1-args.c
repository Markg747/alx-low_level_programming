#include <stdio.h>

/**
 *main - pritns number of arguments
 *
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
