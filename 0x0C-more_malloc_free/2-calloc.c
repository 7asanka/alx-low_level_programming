#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements of the array
 * @size: size of each element of the array
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	char *cptr = (char *)mem;
	for (i = 0; i < nmemb * size; i++)
	{
		cptr[i] = 0;
	}

	return (mem);
}
