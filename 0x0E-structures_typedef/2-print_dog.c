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
	*d = &my_dog;

	if (d == NULL)
	{
		printf("(nil)");
	}
	d->name = my_dog.name;
	d->age = my_dog.age;
	d->age = my_dog.owner;

	if (name == NULL)
	{
		printf("Name: (nil)");
	}
	if (d == NULL)
	{
		printf("");
	}
}
