#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory location ot start filling
 * @b: byte to fill the memory with
 * @n: number of bytes to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ps = s;

	for (i = 0; i < n; i++)
	{
		*s++ = b;
	}
	return (ps);
}
