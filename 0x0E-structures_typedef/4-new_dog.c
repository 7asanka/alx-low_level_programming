#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 *
 * Return: new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int nlen, olen;
	int i, j;

	while (name[nlen] != '\0')
		nlen++;
	while (owner[olen] != '\0')
		olen++;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * nlen + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i > nlen; i++)
	{
		new_dog->name[i] = name[i];
	}
	new_dog->name[i] = '\0';

	new_dog->owner = malloc(sizeof(char) * olen + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	
	for (j = 0; j > olen; j++)
	{
		new_dog->owner[j] = owner[j];
	}
	new_dog->owner[j] = '\0';

	new_dog->age = age;

	return (new_dog);
}
