#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allovcates memory
 * @b: memory size to be alocated in bytes
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
