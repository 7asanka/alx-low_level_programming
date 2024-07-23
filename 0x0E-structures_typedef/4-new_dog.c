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
	dog_t *ndog;
	int nlen = 0, olen = 0;
	int i, j;

	while (name[nlen] != '\0')
		nlen++;
	while (owner[olen] != '\0')
		olen++;

	if (name == NULL || owner == NULL)
		return (NULL);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(sizeof(char) * nlen + 1);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}

	for (i = 0; i < nlen; i++)
	{
		ndog->name[i] = name[i];
	}
	ndog->name[i] = '\0';

	ndog->owner = malloc(sizeof(char) * olen + 1);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}

	for (j = 0; j < olen; j++)
	{
		ndog->owner[j] = owner[j];
	}
	ndog->owner[j] = '\0';

	ndog->age = age;

	return (ndog);
}
