#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds positive numbers
 *
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	if (argc == 0)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j]) >= '0' && (argv[i][j]) <= '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum = atoi(argv[i]) + atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
