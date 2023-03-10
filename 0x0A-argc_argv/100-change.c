#include <stdio.h>
#include <stdlib.h>
/**
 * main - minimum number of coins to make change for a given amount
 * @argc: argument count
 * @argv: arguement vector
 * Return: number of coins or 1
 **/
int main(int argc, char *argv[])
{
	int amount, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (!(atoi(argv[1]) >= '0' && atoi(argv[1]) <= '9'))
	{
		printf("0\n");
	}
	amount = atoi(argv[1]);
	coins = 0;
	if (amount > 25)
	{
		while (amount >= 25)
		{
			amount -= 25;
			coins++;
		}
	}
	if (amount > 10 && amount < 25)
	{
		while (amount >= 10)
		{
			amount -= 10;
			coins++;
		}
	}
	if (amount > 5 && amount < 10)
	{
		while (amount >= 5)
		{
			amount -= 5;
			coins++;
		}
	}
	if (amount > 2 && amount < 5)
	{
		while (amount >= 2)
		{
			amount -= 2;
			coins++;
		}
	}
	if (amount == 1 || amount == 2 || amount == 5 || amount == 10 || amount == 25)
	{
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
