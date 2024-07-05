#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: set of bytes to search for
 *
 * Return: s if found, NULL if no bytes found
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
				return (s);
		}
		s++;
	}

	return ('\0');
}
