#include <stdio.h>

/**
 *main - prints its own name
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
