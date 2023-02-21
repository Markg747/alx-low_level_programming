#include <stdio.h>
#include <string.h>

/**
 *main - Start point
 *
 *Description: uses putchar() to print out string
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char n[] = "_putchar";

	for (i = 0; i <= strlen(n); i++)
	{
		putchar(n[i]);
	}
	putchar('\n');
	return (0);
}
