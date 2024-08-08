#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to get from n to m
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned long int count = 0;

	while (result)
	{
		count += result & 1;
		result >>= 1;
	}

	return (count);
}
