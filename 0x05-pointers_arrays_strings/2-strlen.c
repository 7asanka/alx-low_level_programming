#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string
 *
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int i, n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		n += 1;
	}

	return (n);
}
