#include "dog.h"
#include <stdio.h>

/**
 *print_dog - prints a struct dog
 *
 *@d: dog pointer
 *
 */

void print_dog(struct dog *d)
{
	char *name;
	double age;
	char *owner;

	if (d == NULL)
	{
		;
	}
	if ((*d).name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s\n", (*d).name);
	}
	if ((*d).age < 0)
	{
		printf("Age: (nil)");
	}
	else
	{
		printf("Age: %lf\n", (*d).age);
	}
	if ((*d).owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Owner: %s", (*d).owner);
	}
}
