#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 **new_dog -  creates a new dog.
 *
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 *
 *Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	int j;
	int namelen;
	int ownerlen;
	dog_t *ptr;

	ptr = (dog_t *) malloc(sizeof(dog_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		namelen++;
	}
	for(j = 0; owner[j] != '\0'; j++)
	{
		ownerlen++;
	}
	ptr->name = malloc(sizeof(ptr->name) * namelen);
	if(ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i <= namelen; i++)
	{
		ptr->name[i] = name[i];
	}
	ptr->age = age;
	ptr->owner = malloc(sizeof(ptr->age) * ownerlen);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	for (j = 0; i <= ownerlen; j++)
	{
		ptr->owner[i] = owner[i];
	}
	return (ptr);
}
