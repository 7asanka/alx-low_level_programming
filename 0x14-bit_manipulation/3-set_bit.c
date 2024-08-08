#include "main.h"

/**
 * set_bit - sets a bits value to 1 at a given index
 * @n: value
 * @index: index of the bit
 *
 * Return: 1 if worked, -1 in case of an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << index);

	return (1);
}
