#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initiate a variable of type dog
 * @d: dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
