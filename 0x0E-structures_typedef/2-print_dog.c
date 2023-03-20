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
		printf("");
	}
	if(my_dog.name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s\n", my_dog.name);
	}
	if (my_dog.age < 0)
	{
		printf("Age: (nil)");
	}
	else
	{
		printf("Age: %lf\n", my_dog.age);
	}
	if (my_dog.owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Owner: %s", my_dog.owner);
	}
}
}
