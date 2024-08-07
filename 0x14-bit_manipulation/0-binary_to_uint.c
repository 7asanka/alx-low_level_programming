#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: pointer to a string of a binary
 *
 * Return: the converted number, or 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = (result << 1) | (*b - '0');
		b++;
	}

	return (result);
}
