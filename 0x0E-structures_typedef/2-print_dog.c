#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		char *name = d->name == NULL ? "(nil)" : d->name;
		float age = d->age;
		char *owner = d->owner == NULL ? "(nil)" : d->owner;

		printf("name: %s\nage: %f\nowner: %s\n", name, age, owner);
	}
}
