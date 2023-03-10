#include <stdio.h>

/**
 *main - pritns number of arguments
 *
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc);
	}
	return (0);
}
